//
//  FISGithubAPIClient.h
//  github-repo-list
//
//  Created by Joe Burgess on 5/5/14.
//  Copyright (c) 2014 Joe Burgess. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FISGithubRepository.h"

NSString *const GITHUB_API_URL;


@interface FISGithubAPIClient : NSObject

///---------------------
/// @name Class Methods
///---------------------

/**
 *  Does a `GET` request to the [Github repository API](https://developer.github.com/v3/repos/#list-all-public-repositories) with the `client_id` and `client_secret` parameters as well.
 *  @param completionBlock Block to be called when finished retreiving from the API. Passes an `NSArray` of `NSDictionary` objects from the API.
 */

+(void)performBlockThreeTimes:(void (^)(void))block;

+(void)getRepositoriesWithCompletion:(void (^)(NSArray *repoDictionaries))completionBlock;

+(void)getStarStatusForRepositoryNamed:(NSString *)repoName
                            completion:(void (^)(BOOL isStarred))completionBlock;

+(void)starRepositoryNamed:(NSString *)repoName completion:(void (^)(BOOL didStar))completionBlock;

+(void)unstarRepositoryNamed:(NSString *)repoName completion:(void (^)(BOOL didUnstar))completionBlock;

+(void)toggleStarForRepositoryNamed:(NSString *)repoName completion:(void (^)(BOOL didStar))completionBlock;

@end
