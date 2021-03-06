//
//  LokaliseErrors.h
//  Lokalise
//
//  Created by Fjodors Levkins on 21/05/15.
//  Copyright (c) 2015 Lokalise SIA. All rights reserved.
//

#ifndef Lokalise_LokaliseErrors_h
#define Lokalise_LokaliseErrors_h

typedef NS_ENUM(NSInteger, LokaliseErrorCode) {
    LokaliseErrorNoProjectData = 1,
    LokaliseErrorLocaleNotSupported,
    LokaliseErrorNoLokaliseFolder,
    LokaliseErrorNoLokaliseBundle,
    LokaliseErrorAlreadyUpdating,
    LokaliseErrorFailedToExtact,
    LokaliseErrorBadServerResponse,
    LokaliseErrorBadBundleLocation,
    LokaliseErrorBadServerBundleResponse,
    LokaliseErrorNoLocalBundleForLocale,
    LokaliseErrorNoLocalBundleForLocaleSwizzleDisabled,
    LokaliseErrorNoLokaliseBundleForLocale
};


#endif
