//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-platform/actor-apps/core/src/main/java/im/actor/model/modules/Settings.java
//

#ifndef _ImActorModelModulesSettings_H_
#define _ImActorModelModulesSettings_H_

#include "J2ObjC_header.h"
#include "im/actor/model/modules/BaseModule.h"

@class AMPeer;
@class ImActorModelModulesModules;

@interface ImActorModelModulesSettings : ImActorModelModulesBaseModule

#pragma mark Public

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)modules;

- (void)changeConversationTonesEnabledWithBoolean:(jboolean)val;

- (void)changeInAppEnabledWithBoolean:(jboolean)val;

- (void)changeInAppSoundEnabledWithBoolean:(jboolean)val;

- (void)changeInAppVibrationEnabledWithBoolean:(jboolean)val;

- (void)changeMarkdownWithBoolean:(jboolean)val;

- (void)changeNotificationsEnabledWithBoolean:(jboolean)val;

- (void)changeNotificationsEnabledWithAMPeer:(AMPeer *)peer
                                 withBoolean:(jboolean)val;

- (void)changeNotificationSoundWithAMPeer:(AMPeer *)peer
                             withNSString:(NSString *)sound;

- (void)changeNotificationSoundWithNSString:(NSString *)sound;

- (void)changeNotificationSoundEnabledWithBoolean:(jboolean)val;

- (void)changeNotificationVibrationEnabledWithBoolean:(jboolean)val;

- (void)changeSendByEnterWithBoolean:(jboolean)val;

- (void)changeShowNotificationTextEnabledWithBoolean:(jboolean)val;

- (NSString *)getNotificationSound;

- (NSString *)getNotificationSoundWithAMPeer:(AMPeer *)peer;

- (jboolean)isConversationTonesEnabled;

- (jboolean)isInAppEnabled;

- (jboolean)isInAppSoundEnabled;

- (jboolean)isInAppVibrationEnabled;

- (jboolean)isMarkdownEnabled;

- (jboolean)isNotificationsEnabled;

- (jboolean)isNotificationsEnabledWithAMPeer:(AMPeer *)peer;

- (jboolean)isNotificationSoundEnabled;

- (jboolean)isRenameHintShown;

- (jboolean)isSendByEnterEnabled;

- (jboolean)isShowNotificationsText;

- (jboolean)isVibrationEnabled;

- (void)onUpdatedSettingWithNSString:(NSString *)key
                        withNSString:(NSString *)value;

- (void)resetModule;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesSettings)

FOUNDATION_EXPORT void ImActorModelModulesSettings_initWithImActorModelModulesModules_(ImActorModelModulesSettings *self, ImActorModelModulesModules *modules);

FOUNDATION_EXPORT ImActorModelModulesSettings *new_ImActorModelModulesSettings_initWithImActorModelModulesModules_(ImActorModelModulesModules *modules) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesSettings)

#endif // _ImActorModelModulesSettings_H_
