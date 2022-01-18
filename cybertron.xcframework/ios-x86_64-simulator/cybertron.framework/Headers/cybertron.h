#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CybertronImageCompanion, CybertronImage, CybertronPaginatedResultsPaging, CybertronPaginatedResults<T>, CybertronPaginatedResultsPagingCompanion, CybertronCodeVerification, CybertronPhoneVerification, CybertronKotlinEnumCompanion, CybertronKotlinEnum<E>, CybertronAccessibility, CybertronKotlinArray<T>, CybertronBanDuration, CybertronKotlinx_datetimeInstant, CybertronUser, CybertronCallCompanion, CybertronCall, CybertronMembershipState, CybertronMembershipRole, CybertronState, CybertronPresence, CybertronMemberCompanion, CybertronMember, CybertronMembershipRoleCompanion, CybertronMembershipStateCompanion, CybertronPermissionStateCompanion, CybertronPermissionState, CybertronPermissionsCompanion, CybertronPermissions, CybertronPresenceActivity, CybertronPresenceCompanion, CybertronPresenceActivityCompanion, CybertronRemoveAction, CybertronVisibility, CybertronRoomCompanion, CybertronRoom, CybertronRoomJoinResponseCompanion, CybertronRoomJoinResponse, CybertronRoomMembershipUpdateCompanion, CybertronRoomMembershipUpdate, CybertronBlockedUsersResult, CybertronBlockedUsersCompanion, CybertronBlockedUsers, CybertronBlockedUsersResultCompanion, CybertronBuddy, CybertronBuddyList, CybertronFlagBodyCompanion, CybertronFlagBody, CybertronPresence_Companion, CybertronPresence_, CybertronSessionUserCompanion, CybertronSessionUser, CybertronSession, CybertronSessionUser_, CybertronUserCompanion, CybertronMentionCompanion, CybertronMention, CybertronMessageType, CybertronMessageBody, CybertronMessageFlag, CybertronReaction, CybertronSurveyOption, CybertronMessageCompanion, CybertronMessage, CybertronMessageDataCompanion, CybertronMessageData, CybertronMessageFlagCompanion, CybertronMessageLikeResult, CybertronMessageLikeResultResponse, CybertronMessageLinkCompanion, CybertronMessageLink, CybertronMessageLinkBodyCompanion, CybertronMessageLinkBody, CybertronMessageTypeCompanion, CybertronReactionCompanion, CybertronSurveyOptionCompanion, CybertronMessageFactoryCompanion, CybertronMessageBodyVideo, CybertronMessageBodyLocation, CybertronMessageBodyFavIcon, CybertronMessageBodyThumbnail, CybertronMessageBodyCompanion, CybertronMessageBodyInfoMessageBodyCompanion, CybertronInfoMessageType, CybertronMessageBodyInfoMessageBody, CybertronEmptyInfoMessageBodyCompanion, CybertronEmptyInfoMessageBody, CybertronInfoMessageTypeCompanion, CybertronMessageBodyAppMessageBodyCompanion, CybertronMessageBodyAppMessageBody, CybertronMessageBodyAudioMessageBodyCompanion, CybertronMessageBodyAudioMessageBody, CybertronMessageBodyFavIconCompanion, CybertronMessageBodyHlsMessageBodyCompanion, CybertronMessageBodyHlsMessageBody, CybertronMessageBodyImageMessageBodyCompanion, CybertronMessageBodyImageMessageBody, CybertronMessageBodyLocationCompanion, CybertronMessageBodyLocationMessageBodyCompanion, CybertronMessageBodyLocationMessageBody, CybertronMessageBodyPlaylistMessageBodyCompanion, CybertronMessageBodyPlaylistMessageBody, CybertronMessageBodyRecipientCompanion, CybertronMessageBodyRecipient, CybertronMessageBodySoundcloudMessageBodyCompanion, CybertronMessageBodySoundcloudMessageBody, CybertronMessageBodyTextMessageBodyCompanion, CybertronMessageBodyTextMessageBody, CybertronMessageBodyThumbnailCompanion, CybertronMessageBodyTwitchMessageBodyCompanion, CybertronMessageBodyTwitchMessageBody, CybertronMessageBodyUnknownMessageBodyCompanion, CybertronMessageBodyUnknownMessageBody, CybertronMessageBodyUrlMessageBodyMetadata, CybertronMessageBodyUrlMessageBodyCompanion, CybertronMessageBodyUrlMessageBody, CybertronMessageBodyUrlMessageBodyMetadataCompanion, CybertronMessageBodyVideoCompanion, CybertronMessageBodyVideoMessageBodyCompanion, CybertronMessageBodyVideoMessageBody, CybertronMessageBodyVimeoMessageBodyCompanion, CybertronMessageBodyVimeoMessageBody, CybertronMessageBodyYoutubeMessageBodyCompanion, CybertronMessageBodyYoutubeMessageBody, CybertronMessageDeleteInfoMessageBodyCompanion, CybertronMessageDeleteInfoMessageBody, CybertronUserInfoMessageBody, CybertronPresenceSummaryInfoMessageBodyCompanion, CybertronPresenceSummaryInfoMessageBody, CybertronPresenceUserCompanion, CybertronPresenceUser, CybertronPresenceUserInfoMessageBodyCompanion, CybertronPresenceUserInfoMessageBody, CybertronRecipientInfoMessageBodyCompanion, CybertronRecipientInfoMessageBody, CybertronRequestCompanion, CybertronRequest, CybertronRequestInfoMessageBodyCompanion, CybertronRequestInfoMessageBody, CybertronRoomAccessibilityInfoMessageBodyCompanion, CybertronRoomAccessibilityInfoMessageBody, CybertronRoomCallSummaryInfoMessageBodyCompanion, CybertronRoomCallSummaryInfoMessageBody, CybertronRoomColorInfoMessageBodyCompanion, CybertronRoomColorInfoMessageBody, CybertronRoomCreatedInfoMessageBodyCompanion, CybertronRoomCreatedInfoMessageBody, CybertronRoomDoorbellInfoMessageBodyCompanion, CybertronRoomDoorbellInfoMessageBody, CybertronRoomModeInfoMessageBodyCompanion, CybertronRoomModeInfoMessageBody, CybertronRoomTagsInfoMessageBodyCompanion, CybertronRoomTagsInfoMessageBody, CybertronRoomTitleInfoMessageBodyCompanion, CybertronRoomTitleInfoMessageBody, CybertronRoomTopicInfoMessageBodyCompanion, CybertronRoomTopicInfoMessageBody, CybertronRoomVisibilityInfoMessageBodyCompanion, CybertronRoomVisibilityInfoMessageBody, CybertronSpotifyAlbumCompanion, CybertronSpotifyAlbum, CybertronSpotifyAlbumInfoMessageBodyCompanion, CybertronSpotifyAlbumInfoMessageBody, CybertronSpotifyPlaylistCompanion, CybertronSpotifyPlaylist, CybertronSpotifyPlaylistInfoMessageBodyCompanion, CybertronSpotifyPlaylistInfoMessageBody, CybertronSpotifyTrackCompanion, CybertronSpotifyTrack, CybertronSpotifyTrackInfoMessageBodyCompanion, CybertronSpotifyTrackInfoMessageBody, CybertronSummonInfoMessageBodyCompanion, CybertronSummonInfoMessageBody, CybertronUserBodyCompanion, CybertronUserBody, CybertronUserInfoMessageBodyCompanion, CybertronUserPresentDeleteInfoMessageBodyCompanion, CybertronUserPresentDeleteInfoMessageBody, CybertronUserPresentInfoMessageBodyMediaType, CybertronUserPresentInfoMessageBodyCompanion, CybertronUserPresentInfoMessageBody, CybertronAuthTokenBodyCompanion, CybertronKotlinThrowable, CybertronPublishError, CybertronPublishStateState, CybertronPublishState, CybertronSubscribeStreamSpec, CybertronStreamSubscription<T>, CybertronStreamSubscriptionAuth, CybertronPrimusStream, CybertronContentLengthRange, CybertronConditionCompanion, CybertronCondition, CybertronContentLengthRangeCompanion, CybertronPlainPolicyCompanion, CybertronPlainPolicy, CybertronTokenResponseCompanion, CybertronTokenResponse, CybertronUploadTokenCompanion, CybertronUploadToken, CybertronAccessibility_Companion, CybertronAccessibility_, CybertronPermissionState_Companion, CybertronPermissionState_, CybertronPermissions_Companion, CybertronPermissions_, CybertronPresenceActivity_, CybertronPresence__Companion, CybertronPresence__, CybertronPresenceActivity_Companion, CybertronState_Companion, CybertronState_, CybertronVisibility_Companion, CybertronVisibility_, CybertronAuthRequestCompanion, CybertronAuthRequest, CybertronAuthResponseCompanion, CybertronAuthResponse, CybertronKotlinException, CybertronDSExceptionCode, CybertronDSExceptionDebug, CybertronDSExceptionError, CybertronDSExceptionCompanion, CybertronDSExceptionCodeCompanion, CybertronDSExceptionDebugCompanion, CybertronDSExceptionErrorCompanion, CybertronPalpatineAllocationCompanion, CybertronPalpatineAllocation, CybertronVerifyRequestCompanion, CybertronVerifyRequest, CybertronVerifyResponseCompanion, CybertronVerifyResponse, CybertronSessionUser_Companion, CybertronUserProfileCompanion, CybertronUserProfile, CybertronUserProfileObjectUpdaterBuilder, CybertronPaginatedResponseCompanion, CybertronAvatarResponseCompanion, CybertronAvatarResponse, CybertronBixbyAllocationCompanion, CybertronBixbyTurnInfo, CybertronBixbyResponseCompanion, CybertronBixbyAllocation, CybertronBixbyTurnInfoCompanion, CybertronCallMetaRequestCompanion, CybertronCallMetaRequest, CybertronListStreamsTokenResponseCompanion, CybertronMediaRemoteConfigCompanion, CybertronPublishRequestCompanion, CybertronPublishRequest, CybertronSubscribeRequestCompanion, CybertronSubscribeRequest, CybertronUnpublishResponseCompanion, CybertronKoin_coreKoin, CybertronKtor_client_coreHttpClient, CybertronListStreamsTokenResponse, CybertronBixbyResponse, CybertronMediaRemoteConfig, CybertronUnpublishResponse, CybertronKtor_httpHttpStatusCode, CybertronKotlinPair<__covariant A, __covariant B>, CybertronAPIEndpoints, CybertronCommonSocketPayloadCompanion, CybertronSocketAction, CybertronSocketEventCompanion, CybertronSocketEvent, CybertronFinalOrderEventBatch, CybertronFinalOrderEventMembershipCounter, CybertronFinalOrderEventPresenceCounter, CybertronFinalOrderEventSubscription, CybertronSocketActionCompanion, CybertronSocketEventAvailable, CybertronSocketEventConnect, CybertronSocketEventConnectError, CybertronSocketEventConnectTimeout, CybertronSocketEventDisconnect, CybertronSocketEventEnterRoom, CybertronSocketEventError, CybertronSocketEventExpression, CybertronSocketEventImageValidation, CybertronSocketEventLeaveRoom, CybertronSocketEventMessage, CybertronSocketEventModerator, CybertronSocketEventPhotoBooth, CybertronSocketEventPing, CybertronSocketEventPong, CybertronSocketEventPresence, CybertronSocketEventPresenceChange, CybertronSocketEventPublishers, CybertronSocketEventReconnect, CybertronSocketEventReconnectAttempt, CybertronSocketEventReconnectError, CybertronSocketEventRoom, CybertronSocketEventRoomActionRequest, CybertronSocketEventRoomCall, CybertronSocketEventRoomCallFlag, CybertronSocketEventRoomMembership, CybertronSocketEventRoomMessage, CybertronSocketEventRoomMessageLike, CybertronSocketEventRoomQueue, CybertronSocketEventRoomStage, CybertronSocketEventRoomSummon, CybertronSocketEventRoomUploadValidation, CybertronSocketEventRoomUser, CybertronSocketEventRoomUserInvite, CybertronSocketEventRoomUserSuspension, CybertronSocketEventSubscribe, CybertronSocketEventSubscribed, CybertronSocketEventSubscriptions, CybertronSocketEventSync, CybertronSocketEventSystem, CybertronSocketEventUnsubscribe, CybertronSocketEventUserFollow, CybertronSocketEventUserFriend, CybertronSocketEventUserSuspension, CybertronSocketEventWham, CybertronSocketEventSerializer, CybertronPrimusDatabaseCompanion, CybertronMember_Adapter, CybertronMessage_Adapter, CybertronPresence___Adapter, CybertronRoom_Adapter, CybertronSessionAdapter, CybertronUser_Adapter, CybertronPrimusDatabaseWrapper, CybertronUser_, CybertronMember_, CybertronRuntimeQuery<__covariant RowType>, CybertronRoomMemberWithPresence, CybertronRoomMemberWithPresenceById, CybertronMessage_, CybertronPresence___, CybertronRoom_, CybertronKoinQualifiers, CybertronMediaAuthJwtDecoder, CybertronMediaAuthJwtDecoderJwt, CybertronUserSurrogate, CybertronLoginDataValidatorCompanion, CybertronLoginDataValidatorResult, CybertronLoginDataValidatorResultSuccess, CybertronCustomJsonFeatureFeature, CybertronKtor_httpContentType, CybertronKtor_utilsAttributeKey<T>, CybertronCustomJsonFeature, CybertronCustomJsonFeatureConfig, CybertronStatus, CybertronResourceCompanion, CybertronResource<__covariant T>, CybertronPaginatedResourceCompanion, CybertronPaginatedResource<__covariant T>, CybertronMediaRepositoryCompanion, CybertronKotlinx_serialization_jsonJson, CybertronRoomRepositoryCompanion, CybertronUserRepositoryCompanion, CybertronKtor_client_coreHttpClientConfig<T>, CybertronKoin_coreModule, CybertronLoginRepository, CybertronKoin_coreKoinApplication, CybertronKotlinx_datetimeInstantCompanion, CybertronKotlinUnit, CybertronKoin_coreScope, CybertronKoin_coreParametersHolder, CybertronKotlinLazyThreadSafetyMode, CybertronKoin_coreLogger, CybertronKoin_coreInstanceRegistry, CybertronKoin_corePropertyRegistry, CybertronKoin_coreScopeRegistry, CybertronKtor_client_coreHttpClientEngineConfig, CybertronKtor_client_coreHttpRequestBuilder, CybertronKtor_client_coreHttpClientCall, CybertronKotlinx_coroutines_coreCoroutineDispatcher, CybertronKtor_client_coreHttpReceivePipeline, CybertronKtor_client_coreHttpRequestPipeline, CybertronKtor_client_coreHttpResponsePipeline, CybertronKtor_client_coreHttpSendPipeline, CybertronKotlinRuntimeException, CybertronKotlinIllegalStateException, CybertronKtor_httpHttpStatusCodeCompanion, CybertronKotlinx_serialization_coreSerializersModule, CybertronKotlinx_serialization_coreSerialKind, CybertronKotlinNothing, CybertronRuntimeTransacterTransaction, CybertronKotlinCancellationException, CybertronKtor_client_coreTypeInfo, CybertronKtor_httpOutgoingContent, CybertronKtor_httpHeaderValueParam, CybertronKtor_httpHeaderValueWithParametersCompanion, CybertronKtor_httpHeaderValueWithParameters, CybertronKtor_httpContentTypeCompanion, CybertronKotlinx_serialization_jsonJsonConfiguration, CybertronKotlinx_serialization_jsonJsonDefault, CybertronKotlinx_serialization_jsonJsonElement, CybertronKoin_coreInstanceFactory<T>, CybertronKoin_coreScopeDSL, CybertronKoin_coreSingleInstanceFactory<T>, CybertronKoin_coreKoinApplicationCompanion, CybertronKoin_coreLevel, CybertronKoin_coreParametersHolderCompanion, CybertronKoin_coreScopeRegistryCompanion, CybertronKtor_client_coreHttpRequestData, CybertronKtor_client_coreHttpResponseData, CybertronKtor_client_coreProxyConfig, CybertronKtor_httpHeadersBuilder, CybertronKtor_client_coreHttpRequestBuilderCompanion, CybertronKtor_httpURLBuilder, CybertronKtor_httpHttpMethod, CybertronKtor_client_coreHttpClientCallCompanion, CybertronKtor_client_coreHttpResponse, CybertronKotlinAbstractCoroutineContextElement, CybertronKotlinx_coroutines_coreCoroutineDispatcherKey, CybertronKtor_utilsPipelinePhase, CybertronKtor_utilsPipeline<TSubject, TContext>, CybertronKtor_client_coreHttpReceivePipelinePhases, CybertronKtor_client_coreHttpRequestPipelinePhases, CybertronKtor_client_coreHttpResponsePipelinePhases, CybertronKtor_client_coreHttpResponseContainer, CybertronKtor_client_coreHttpSendPipelinePhases, CybertronKotlinByteArray, CybertronKtor_ioMemory, CybertronKtor_ioByteOrder, CybertronKotlinx_serialization_jsonJsonElementCompanion, CybertronKoin_coreBeanDefinition<T>, CybertronKoin_coreInstanceFactoryCompanion, CybertronKoin_coreInstanceContext, CybertronKtor_httpUrl, CybertronKtor_utilsGMTDate, CybertronKtor_httpHttpProtocolVersion, CybertronKtor_utilsStringValuesBuilder, CybertronKtor_httpURLProtocol, CybertronKtor_httpParametersBuilder, CybertronKtor_httpURLBuilderCompanion, CybertronKtor_httpHttpMethodCompanion, CybertronKtor_ioIoBuffer, CybertronKtor_ioByteReadPacket, CybertronKotlinAbstractCoroutineContextKey<B, E>, CybertronKotlinByteIterator, CybertronKotlinx_coroutines_coreAtomicDesc, CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, CybertronKotlinKTypeProjection, CybertronKtor_ioMemoryCompanion, CybertronKtor_ioByteOrderCompanion, CybertronKoin_coreKind, CybertronKoin_coreCallbacks<T>, CybertronKtor_httpUrlCompanion, CybertronKtor_utilsGMTDateCompanion, CybertronKtor_utilsWeekDay, CybertronKtor_utilsMonth, CybertronKtor_httpHttpProtocolVersionCompanion, CybertronKtor_httpURLProtocolCompanion, CybertronKtor_httpUrlEncodingOption, CybertronKtor_ioBufferCompanion, CybertronKtor_ioBuffer, CybertronKtor_ioChunkBuffer, CybertronKtor_ioChunkBufferCompanion, CybertronKotlinCharArray, CybertronKtor_ioIoBufferCompanion, CybertronKtor_ioAbstractInputCompanion, CybertronKtor_ioAbstractInput, CybertronKtor_ioByteReadPacketBaseCompanion, CybertronKtor_ioByteReadPacketBase, CybertronKtor_ioByteReadPacketPlatformBase, CybertronKtor_ioByteReadPacketCompanion, CybertronKotlinx_coroutines_coreAtomicOp<__contravariant T>, CybertronKotlinx_coroutines_coreOpDescriptor, CybertronKotlinx_coroutines_coreLockFreeLinkedListNode, CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, CybertronKotlinKVariance, CybertronKotlinKTypeProjectionCompanion, CybertronKtor_utilsWeekDayCompanion, CybertronKtor_utilsMonthCompanion, CybertronKotlinCharIterator, CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol CybertronKotlinx_serialization_coreKSerializer, CybertronKotlinComparable, CybertronKotlinx_coroutines_coreStateFlow, CybertronKoin_coreKoinComponent, CybertronKotlinx_serialization_coreEncoder, CybertronKotlinx_serialization_coreSerialDescriptor, CybertronKotlinx_serialization_coreSerializationStrategy, CybertronKotlinx_serialization_coreDecoder, CybertronKotlinx_serialization_coreDeserializationStrategy, CybertronPrimusDatabase, CybertronKotlinx_coroutines_coreFlow, CybertronMemberQueries, CybertronMessageQueries, CybertronPresenceQueries, CybertronRoomQueries, CybertronSessionQueries, CybertronUserQueries, CybertronRuntimeTransactionWithoutReturn, CybertronRuntimeTransactionWithReturn, CybertronRuntimeTransacter, CybertronRuntimeSqlDriver, CybertronRuntimeSqlDriverSchema, CybertronRuntimeColumnAdapter, CybertronKotlinx_coroutines_coreCoroutineScope, CybertronKoruScopeProvider, CybertronKotlinx_coroutines_coreJob, CybertronKtor_client_jsonJsonSerializer, CybertronKtor_httpContentTypeMatcher, CybertronKtor_client_coreHttpClientFeature, CybertronKotlinSuspendFunction0, CybertronMultiplatform_settingsSettings, CybertronKotlinx_serialization_coreCompositeDecoder, CybertronKotlinSuspendFunction1, CybertronKotlinIterator, CybertronKotlinx_coroutines_coreFlowCollector, CybertronKotlinx_coroutines_coreSharedFlow, CybertronKoin_coreKoinScopeComponent, CybertronKoin_coreQualifier, CybertronKotlinKClass, CybertronKotlinLazy, CybertronKotlinCoroutineContext, CybertronKtor_ioCloseable, CybertronKtor_client_coreHttpClientEngine, CybertronKtor_client_coreHttpClientEngineCapability, CybertronKtor_utilsAttributes, CybertronKotlinx_serialization_coreCompositeEncoder, CybertronKotlinAnnotation, CybertronRuntimeTransactionCallbacks, CybertronRuntimeSqlPreparedStatement, CybertronRuntimeSqlCursor, CybertronRuntimeCloseable, CybertronRuntimeQueryListener, CybertronKotlinx_coroutines_coreChildHandle, CybertronKotlinx_coroutines_coreChildJob, CybertronKotlinx_coroutines_coreDisposableHandle, CybertronKotlinSequence, CybertronKotlinx_coroutines_coreSelectClause0, CybertronKotlinCoroutineContextKey, CybertronKotlinCoroutineContextElement, CybertronKtor_ioInput, CybertronKtor_utilsTypeInfo, CybertronKotlinFunction, CybertronKotlinx_serialization_coreSerialFormat, CybertronKotlinx_serialization_coreStringFormat, CybertronKoin_coreScopeCallback, CybertronKotlinKDeclarationContainer, CybertronKotlinKAnnotatedElement, CybertronKotlinKClassifier, CybertronKtor_httpHttpMessageBuilder, CybertronKtor_ioByteReadChannel, CybertronKtor_client_coreHttpRequest, CybertronKotlinContinuation, CybertronKotlinContinuationInterceptor, CybertronKotlinx_coroutines_coreRunnable, CybertronKotlinSuspendFunction2, CybertronKotlinx_serialization_coreSerializersModuleCollector, CybertronKotlinx_coroutines_coreParentJob, CybertronKotlinx_coroutines_coreSelectInstance, CybertronKotlinKType, CybertronKtor_httpHeaders, CybertronKtor_utilsStringValues, CybertronKotlinMapEntry, CybertronKtor_ioReadSession, CybertronKotlinAppendable, CybertronKtor_httpHttpMessage, CybertronKtor_httpParameters, CybertronKtor_ioObjectPool, CybertronKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CybertronBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CybertronBase (CybertronBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CybertronMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CybertronMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCybertronKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CybertronNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CybertronByte : CybertronNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CybertronUByte : CybertronNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CybertronShort : CybertronNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CybertronUShort : CybertronNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CybertronInt : CybertronNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CybertronUInt : CybertronNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CybertronLong : CybertronNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CybertronULong : CybertronNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CybertronFloat : CybertronNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CybertronDouble : CybertronNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CybertronBoolean : CybertronNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface CybertronImage : CybertronBase
- (instancetype)initWithHeight:(CybertronInt * _Nullable)height width:(CybertronInt * _Nullable)width url:(NSString * _Nullable)url optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("init(height:width:url:optimizedUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronImageCompanion *companion __attribute__((swift_name("companion")));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronImage *)doCopyHeight:(CybertronInt * _Nullable)height width:(CybertronInt * _Nullable)width url:(NSString * _Nullable)url optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("doCopy(height:width:url:optimizedUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) CybertronInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image.Companion")))
@interface CybertronImageCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronImageCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResults")))
@interface CybertronPaginatedResults<T> : CybertronBase
- (instancetype)initWithResults:(NSArray<id> *)results skip:(int32_t)skip limit:(int32_t)limit total:(CybertronInt * _Nullable)total paging:(CybertronPaginatedResultsPaging * _Nullable)paging __attribute__((swift_name("init(results:skip:limit:total:paging:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)component1 __attribute__((swift_name("component1()")));
- (CybertronPaginatedResults<T> *)doCopyResults:(NSArray<id> *)results skip:(int32_t)skip limit:(int32_t)limit total:(CybertronInt * _Nullable)total paging:(CybertronPaginatedResultsPaging * _Nullable)paging __attribute__((swift_name("doCopy(results:skip:limit:total:paging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (BOOL)hasPrevious __attribute__((swift_name("hasPrevious()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *results __attribute__((swift_name("results")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResultsPaging")))
@interface CybertronPaginatedResultsPaging : CybertronBase
- (instancetype)initWithCurrent:(NSString * _Nullable)current next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous __attribute__((swift_name("init(current:next:previous:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPaginatedResultsPagingCompanion *companion __attribute__((swift_name("companion")));
- (CybertronPaginatedResultsPaging *)doCopyCurrent:(NSString * _Nullable)current next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous __attribute__((swift_name("doCopy(current:next:previous:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResultsPaging.Companion")))
@interface CybertronPaginatedResultsPagingCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPaginatedResultsPagingCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeVerification")))
@interface CybertronCodeVerification : CybertronBase
- (instancetype)initWithToken:(NSString *)token userStatus:(NSString *)userStatus __attribute__((swift_name("init(token:userStatus:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronCodeVerification *)doCopyToken:(NSString *)token userStatus:(NSString *)userStatus __attribute__((swift_name("doCopy(token:userStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *userStatus __attribute__((swift_name("userStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneVerification")))
@interface CybertronPhoneVerification : CybertronBase
- (instancetype)initWithVerified:(BOOL)verified supportsVoiceAuth:(BOOL)supportsVoiceAuth __attribute__((swift_name("init(verified:supportsVoiceAuth:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (CybertronPhoneVerification *)doCopyVerified:(BOOL)verified supportsVoiceAuth:(BOOL)supportsVoiceAuth __attribute__((swift_name("doCopy(verified:supportsVoiceAuth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL supportsVoiceAuth __attribute__((swift_name("supportsVoiceAuth")));
@property (readonly) BOOL verified __attribute__((swift_name("verified")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CybertronKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CybertronKotlinEnum<E> : CybertronBase <CybertronKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Accessibility")))
@interface CybertronAccessibility : CybertronKotlinEnum<CybertronAccessibility *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronAccessibility *inviteOnly __attribute__((swift_name("inviteOnly")));
@property (class, readonly) CybertronAccessibility *request __attribute__((swift_name("request")));
@property (class, readonly) CybertronAccessibility *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) CybertronAccessibility *open __attribute__((swift_name("open")));
+ (CybertronKotlinArray<CybertronAccessibility *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BanDuration")))
@interface CybertronBanDuration : CybertronKotlinEnum<CybertronBanDuration *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronBanDuration *hour __attribute__((swift_name("hour")));
@property (class, readonly) CybertronBanDuration *day __attribute__((swift_name("day")));
@property (class, readonly) CybertronBanDuration *permanent __attribute__((swift_name("permanent")));
+ (CybertronKotlinArray<CybertronBanDuration *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Call")))
@interface CybertronCall : CybertronBase
- (instancetype)initWithId:(NSString *)id roomId:(NSString *)roomId createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt state:(NSString * _Nullable)state activeAt:(CybertronKotlinx_datetimeInstant * _Nullable)activeAt caller:(CybertronUser * _Nullable)caller publishers:(NSArray<CybertronUser *> * _Nullable)publishers __attribute__((swift_name("init(id:roomId:createdAt:updatedAt:state:activeAt:caller:publishers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronCallCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronUser * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<CybertronUser *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronCall *)doCopyId:(NSString *)id roomId:(NSString *)roomId createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt state:(NSString * _Nullable)state activeAt:(CybertronKotlinx_datetimeInstant * _Nullable)activeAt caller:(CybertronUser * _Nullable)caller publishers:(NSArray<CybertronUser *> * _Nullable)publishers __attribute__((swift_name("doCopy(id:roomId:createdAt:updatedAt:state:activeAt:caller:publishers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable activeAt __attribute__((swift_name("activeAt")));
@property (readonly) CybertronUser * _Nullable caller __attribute__((swift_name("caller")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<CybertronUser *> * _Nullable publishers __attribute__((swift_name("publishers")));
@property (readonly) NSString *roomId __attribute__((swift_name("roomId")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Call.Companion")))
@interface CybertronCallCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronCallCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Member")))
@interface CybertronMember : CybertronBase
- (instancetype)initWithInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser *)user state:(CybertronState * _Nullable)state presence:(CybertronPresence * _Nullable)presence __attribute__((swift_name("init(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:state:presence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMemberCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronPresence * _Nullable)component10 __attribute__((swift_name("component10()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CybertronMembershipState * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMembershipRole * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronUser *)component8 __attribute__((swift_name("component8()")));
- (CybertronState * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMember *)doCopyInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser *)user state:(CybertronState * _Nullable)state presence:(CybertronPresence * _Nullable)presence __attribute__((swift_name("doCopy(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:state:presence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable invitedBy __attribute__((swift_name("invitedBy")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) CybertronPresence * _Nullable presence __attribute__((swift_name("presence")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Member.Companion")))
@interface CybertronMemberCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMemberCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MembershipRole")))
@interface CybertronMembershipRole : CybertronKotlinEnum<CybertronMembershipRole *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMembershipRoleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronMembershipRole *globalModerator __attribute__((swift_name("globalModerator")));
@property (class, readonly) CybertronMembershipRole *creator __attribute__((swift_name("creator")));
@property (class, readonly) CybertronMembershipRole *roomAdmin __attribute__((swift_name("roomAdmin")));
@property (class, readonly) CybertronMembershipRole *host __attribute__((swift_name("host")));
@property (class, readonly) CybertronMembershipRole *basic __attribute__((swift_name("basic")));
@property (class, readonly) CybertronMembershipRole *nonMember __attribute__((swift_name("nonMember")));
+ (CybertronKotlinArray<CybertronMembershipRole *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MembershipRole.Companion")))
@interface CybertronMembershipRoleCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMembershipRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MembershipState")))
@interface CybertronMembershipState : CybertronKotlinEnum<CybertronMembershipState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMembershipStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronMembershipState *active __attribute__((swift_name("active")));
@property (class, readonly) CybertronMembershipState *invited __attribute__((swift_name("invited")));
@property (class, readonly) CybertronMembershipState *requested __attribute__((swift_name("requested")));
@property (class, readonly) CybertronMembershipState *left __attribute__((swift_name("left")));
@property (class, readonly) CybertronMembershipState *ignored __attribute__((swift_name("ignored")));
@property (class, readonly) CybertronMembershipState *banned __attribute__((swift_name("banned")));
+ (CybertronKotlinArray<CybertronMembershipState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MembershipState.Companion")))
@interface CybertronMembershipStateCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMembershipStateCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState")))
@interface CybertronPermissionState : CybertronKotlinEnum<CybertronPermissionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPermissionStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronPermissionState *everyone __attribute__((swift_name("everyone")));
@property (class, readonly) CybertronPermissionState *members __attribute__((swift_name("members")));
@property (class, readonly) CybertronPermissionState *moderators __attribute__((swift_name("moderators")));
@property (class, readonly) CybertronPermissionState *admins __attribute__((swift_name("admins")));
@property (class, readonly) CybertronPermissionState *creator __attribute__((swift_name("creator")));
@property (class, readonly) CybertronPermissionState *globalModerators __attribute__((swift_name("globalModerators")));
+ (CybertronKotlinArray<CybertronPermissionState *> *)values __attribute__((swift_name("values()")));
- (BOOL)isAllowedMembershipRole:(CybertronMembershipRole * _Nullable)membershipRole __attribute__((swift_name("isAllowed(membershipRole:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState.Companion")))
@interface CybertronPermissionStateCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPermissionStateCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions")))
@interface CybertronPermissions : CybertronBase
- (instancetype)initWithEditRoomProperties:(CybertronPermissionState *)editRoomProperties controlStage:(CybertronPermissionState *)controlStage changeMembership:(CybertronPermissionState *)changeMembership clearHistory:(CybertronPermissionState *)clearHistory seekMedia:(CybertronPermissionState *)seekMedia postMessage:(CybertronPermissionState *)postMessage postMedia:(CybertronPermissionState *)postMedia postLink:(CybertronPermissionState *)postLink uploadLocalMedia:(CybertronPermissionState *)uploadLocalMedia sendInvite:(CybertronPermissionState *)sendInvite sendReactions:(CybertronPermissionState *)sendReactions goLiveVideoWithoutRequest:(CybertronPermissionState *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(CybertronPermissionState *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(CybertronPermissionState *)roomRequestApproveGoLive inviteGoLiveAudio:(CybertronPermissionState *)inviteGoLiveAudio inviteGoLiveVideo:(CybertronPermissionState *)inviteGoLiveVideo deleteRoom:(CybertronPermissionState *)deleteRoom __attribute__((swift_name("init(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (CybertronPermissionState *)component1 __attribute__((swift_name("component1()")));
- (CybertronPermissionState *)component10 __attribute__((swift_name("component10()")));
- (CybertronPermissionState *)component11 __attribute__((swift_name("component11()")));
- (CybertronPermissionState *)component12 __attribute__((swift_name("component12()")));
- (CybertronPermissionState *)component13 __attribute__((swift_name("component13()")));
- (CybertronPermissionState *)component14 __attribute__((swift_name("component14()")));
- (CybertronPermissionState *)component15 __attribute__((swift_name("component15()")));
- (CybertronPermissionState *)component16 __attribute__((swift_name("component16()")));
- (CybertronPermissionState *)component17 __attribute__((swift_name("component17()")));
- (CybertronPermissionState *)component2 __attribute__((swift_name("component2()")));
- (CybertronPermissionState *)component3 __attribute__((swift_name("component3()")));
- (CybertronPermissionState *)component4 __attribute__((swift_name("component4()")));
- (CybertronPermissionState *)component5 __attribute__((swift_name("component5()")));
- (CybertronPermissionState *)component6 __attribute__((swift_name("component6()")));
- (CybertronPermissionState *)component7 __attribute__((swift_name("component7()")));
- (CybertronPermissionState *)component8 __attribute__((swift_name("component8()")));
- (CybertronPermissionState *)component9 __attribute__((swift_name("component9()")));
- (CybertronPermissions *)doCopyEditRoomProperties:(CybertronPermissionState *)editRoomProperties controlStage:(CybertronPermissionState *)controlStage changeMembership:(CybertronPermissionState *)changeMembership clearHistory:(CybertronPermissionState *)clearHistory seekMedia:(CybertronPermissionState *)seekMedia postMessage:(CybertronPermissionState *)postMessage postMedia:(CybertronPermissionState *)postMedia postLink:(CybertronPermissionState *)postLink uploadLocalMedia:(CybertronPermissionState *)uploadLocalMedia sendInvite:(CybertronPermissionState *)sendInvite sendReactions:(CybertronPermissionState *)sendReactions goLiveVideoWithoutRequest:(CybertronPermissionState *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(CybertronPermissionState *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(CybertronPermissionState *)roomRequestApproveGoLive inviteGoLiveAudio:(CybertronPermissionState *)inviteGoLiveAudio inviteGoLiveVideo:(CybertronPermissionState *)inviteGoLiveVideo deleteRoom:(CybertronPermissionState *)deleteRoom __attribute__((swift_name("doCopy(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronPermissionState *changeMembership __attribute__((swift_name("changeMembership")));
@property (readonly) CybertronPermissionState *clearHistory __attribute__((swift_name("clearHistory")));
@property (readonly) CybertronPermissionState *controlStage __attribute__((swift_name("controlStage")));
@property (readonly) CybertronPermissionState *deleteRoom __attribute__((swift_name("deleteRoom")));
@property (readonly) CybertronPermissionState *editRoomProperties __attribute__((swift_name("editRoomProperties")));
@property (readonly) CybertronPermissionState *goLiveAudioWithoutRequest __attribute__((swift_name("goLiveAudioWithoutRequest")));
@property (readonly) CybertronPermissionState *goLiveVideoWithoutRequest __attribute__((swift_name("goLiveVideoWithoutRequest")));
@property (readonly) CybertronPermissionState *inviteGoLiveAudio __attribute__((swift_name("inviteGoLiveAudio")));
@property (readonly) CybertronPermissionState *inviteGoLiveVideo __attribute__((swift_name("inviteGoLiveVideo")));
@property (readonly) CybertronPermissionState *postLink __attribute__((swift_name("postLink")));
@property (readonly) CybertronPermissionState *postMedia __attribute__((swift_name("postMedia")));
@property (readonly) CybertronPermissionState *postMessage __attribute__((swift_name("postMessage")));
@property (readonly) CybertronPermissionState *roomRequestApproveGoLive __attribute__((swift_name("roomRequestApproveGoLive")));
@property (readonly) CybertronPermissionState *seekMedia __attribute__((swift_name("seekMedia")));
@property (readonly) CybertronPermissionState *sendInvite __attribute__((swift_name("sendInvite")));
@property (readonly) CybertronPermissionState *sendReactions __attribute__((swift_name("sendReactions")));
@property (readonly) CybertronPermissionState *uploadLocalMedia __attribute__((swift_name("uploadLocalMedia")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions.Companion")))
@interface CybertronPermissionsCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence")))
@interface CybertronPresence : CybertronBase
- (instancetype)initWithUser:(NSString *)user room:(NSString *)room state:(CybertronPresenceActivity * _Nullable)state validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("init(user:room:state:validUntil:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPresenceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronPresenceActivity * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresence *)doCopyUser:(NSString *)user room:(NSString *)room state:(CybertronPresenceActivity * _Nullable)state validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("doCopy(user:room:state:validUntil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isPresent __attribute__((swift_name("isPresent()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) CybertronPresenceActivity * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSString *user __attribute__((swift_name("user")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable validUntil __attribute__((swift_name("validUntil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence.Companion")))
@interface CybertronPresenceCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceActivity")))
@interface CybertronPresenceActivity : CybertronKotlinEnum<CybertronPresenceActivity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPresenceActivityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronPresenceActivity *gone __attribute__((swift_name("gone")));
@property (class, readonly) CybertronPresenceActivity *none __attribute__((swift_name("none")));
@property (class, readonly) CybertronPresenceActivity *typing __attribute__((swift_name("typing")));
@property (class, readonly) CybertronPresenceActivity *picture __attribute__((swift_name("picture")));
@property (class, readonly) CybertronPresenceActivity *location __attribute__((swift_name("location")));
@property (class, readonly) CybertronPresenceActivity *other __attribute__((swift_name("other")));
+ (CybertronKotlinArray<CybertronPresenceActivity *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t timeout __attribute__((swift_name("timeout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceActivity.Companion")))
@interface CybertronPresenceActivityCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceActivityCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveAction")))
@interface CybertronRemoveAction : CybertronKotlinEnum<CybertronRemoveAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronRemoveAction *ban __attribute__((swift_name("ban")));
@property (class, readonly) CybertronRemoveAction *unban __attribute__((swift_name("unban")));
+ (CybertronKotlinArray<CybertronRemoveAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room")))
@interface CybertronRoom : CybertronBase
- (instancetype)initWithId:(NSString *)id owner:(CybertronUser * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(CybertronVisibility * _Nullable)visibility accessibility:(CybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(CybertronLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(CybertronInt * _Nullable)memberCount spectatorCount:(CybertronInt * _Nullable)spectatorCount invitedCount:(int32_t)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(CybertronState * _Nullable)state membershipRole:(CybertronMembershipRole * _Nullable)membershipRole membershipState:(CybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl colors:(NSArray<NSString *> *)colors featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<CybertronUser *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<CybertronUser *> *)presence createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(CybertronCall * _Nullable)call permissions:(CybertronPermissions * _Nullable)permissions __attribute__((swift_name("init(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:colors:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronRoomCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (CybertronLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (CybertronInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (int32_t)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (BOOL)component19 __attribute__((swift_name("component19()")));
- (CybertronUser * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component20 __attribute__((swift_name("component20()")));
- (CybertronState * _Nullable)component21 __attribute__((swift_name("component21()")));
- (CybertronMembershipRole * _Nullable)component22 __attribute__((swift_name("component22()")));
- (CybertronMembershipState * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSArray<NSString *> *)component26 __attribute__((swift_name("component26()")));
- (NSArray<NSString *> *)component27 __attribute__((swift_name("component27()")));
- (NSArray<NSString *> *)component28 __attribute__((swift_name("component28()")));
- (NSArray<NSString *> *)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component30 __attribute__((swift_name("component30()")));
- (NSArray<NSString *> *)component31 __attribute__((swift_name("component31()")));
- (NSArray<CybertronUser *> *)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSArray<CybertronUser *> *)component34 __attribute__((swift_name("component34()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component35 __attribute__((swift_name("component35()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component36 __attribute__((swift_name("component36()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component37 __attribute__((swift_name("component37()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component38 __attribute__((swift_name("component38()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component40 __attribute__((swift_name("component40()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component41 __attribute__((swift_name("component41()")));
- (CybertronCall * _Nullable)component42 __attribute__((swift_name("component42()")));
- (CybertronPermissions * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> *)component6 __attribute__((swift_name("component6()")));
- (CybertronVisibility * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronAccessibility * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CybertronRoom *)doCopyId:(NSString *)id owner:(CybertronUser * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(CybertronVisibility * _Nullable)visibility accessibility:(CybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(CybertronLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(CybertronInt * _Nullable)memberCount spectatorCount:(CybertronInt * _Nullable)spectatorCount invitedCount:(int32_t)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(CybertronState * _Nullable)state membershipRole:(CybertronMembershipRole * _Nullable)membershipRole membershipState:(CybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl colors:(NSArray<NSString *> *)colors featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<CybertronUser *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<CybertronUser *> *)presence createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(CybertronCall * _Nullable)call permissions:(CybertronPermissions * _Nullable)permissions __attribute__((swift_name("doCopy(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:colors:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) CybertronAccessibility * _Nullable accessibility __attribute__((swift_name("accessibility")));
@property (readonly) BOOL allowGoLiveRoomRequests __attribute__((swift_name("allowGoLiveRoomRequests")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) CybertronCall * _Nullable call __attribute__((swift_name("call")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSArray<NSString *> *colors __attribute__((swift_name("colors")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) BOOL defaultNewMembersToSpectator __attribute__((swift_name("defaultNewMembersToSpectator")));
@property (readonly) BOOL favorite __attribute__((swift_name("favorite")));
@property (readonly) BOOL feature __attribute__((swift_name("feature")));
@property (readonly) NSArray<CybertronUser *> *featured __attribute__((swift_name("featured")));
@property (readonly) NSArray<NSString *> *featuredInviteeNames __attribute__((swift_name("featuredInviteeNames")));
@property (readonly) NSArray<NSString *> *featuredInvitees __attribute__((swift_name("featuredInvitees")));
@property (readonly) NSArray<NSString *> *featuredNames __attribute__((swift_name("featuredNames")));
@property (readonly) NSArray<NSString *> *featuredUsers __attribute__((swift_name("featuredUsers")));
@property (readonly) NSArray<NSString *> *featuredUsersAvatarUrls __attribute__((swift_name("featuredUsersAvatarUrls")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable inviteCreatedAt __attribute__((swift_name("inviteCreatedAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable inviteUpdatedAt __attribute__((swift_name("inviteUpdatedAt")));
@property (readonly) int32_t invitedCount __attribute__((swift_name("invitedCount")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastActivityAt __attribute__((swift_name("lastActivityAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastCallAt __attribute__((swift_name("lastCallAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastMessageAt __attribute__((swift_name("lastMessageAt")));
@property (readonly) BOOL live __attribute__((swift_name("live")));
@property (readonly) CybertronInt * _Nullable memberCount __attribute__((swift_name("memberCount")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) CybertronLong * _Nullable notificationMuteDuration __attribute__((swift_name("notificationMuteDuration")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) CybertronUser * _Nullable owner __attribute__((swift_name("owner")));
@property (readonly) CybertronPermissions * _Nullable permissions __attribute__((swift_name("permissions")));
@property (readonly) NSArray<CybertronUser *> *presence __attribute__((swift_name("presence")));
@property (readonly) CybertronInt * _Nullable spectatorCount __attribute__((swift_name("spectatorCount")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable topic __attribute__((swift_name("topic")));
@property (readonly) BOOL unseen __attribute__((swift_name("unseen")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronVisibility * _Nullable visibility __attribute__((swift_name("visibility")));
@property (readonly) BOOL visited __attribute__((swift_name("visited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room.Companion")))
@interface CybertronRoomCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomJoinResponse")))
@interface CybertronRoomJoinResponse : CybertronBase
- (instancetype)initWithInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt state:(CybertronState * _Nullable)state userId:(NSString * _Nullable)userId roomId:(NSString * _Nullable)roomId accessToken:(NSString * _Nullable)accessToken __attribute__((swift_name("init(invitedBy:updatedAt:createdAt:state:userId:roomId:accessToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronRoomJoinResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronState * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronRoomJoinResponse *)doCopyInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt state:(CybertronState * _Nullable)state userId:(NSString * _Nullable)userId roomId:(NSString * _Nullable)roomId accessToken:(NSString * _Nullable)accessToken __attribute__((swift_name("doCopy(invitedBy:updatedAt:createdAt:state:userId:roomId:accessToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable invitedBy __attribute__((swift_name("invitedBy")));
@property (readonly) NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomJoinResponse.Companion")))
@interface CybertronRoomJoinResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomJoinResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomMembershipUpdate")))
@interface CybertronRoomMembershipUpdate : CybertronBase
- (instancetype)initWithPreviousMembershipRole:(CybertronMembershipRole *)previousMembershipRole membershipRole:(CybertronMembershipRole *)membershipRole type:(NSString *)type previousMembershipState:(CybertronMembershipState *)previousMembershipState membershipState:(CybertronMembershipState *)membershipState state:(CybertronState *)state __attribute__((swift_name("init(previousMembershipRole:membershipRole:type:previousMembershipState:membershipState:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronRoomMembershipUpdateCompanion *companion __attribute__((swift_name("companion")));
- (CybertronMembershipRole *)component1 __attribute__((swift_name("component1()")));
- (CybertronMembershipRole *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CybertronMembershipState *)component4 __attribute__((swift_name("component4()")));
- (CybertronMembershipState *)component5 __attribute__((swift_name("component5()")));
- (CybertronState *)component6 __attribute__((swift_name("component6()")));
- (CybertronRoomMembershipUpdate *)doCopyPreviousMembershipRole:(CybertronMembershipRole *)previousMembershipRole membershipRole:(CybertronMembershipRole *)membershipRole type:(NSString *)type previousMembershipState:(CybertronMembershipState *)previousMembershipState membershipState:(CybertronMembershipState *)membershipState state:(CybertronState *)state __attribute__((swift_name("doCopy(previousMembershipRole:membershipRole:type:previousMembershipState:membershipState:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMembershipRole *membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState *membershipState __attribute__((swift_name("membershipState")));
@property (readonly) CybertronMembershipRole *previousMembershipRole __attribute__((swift_name("previousMembershipRole")));
@property (readonly) CybertronMembershipState *previousMembershipState __attribute__((swift_name("previousMembershipState")));
@property (readonly) CybertronState *state __attribute__((swift_name("state")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomMembershipUpdate.Companion")))
@interface CybertronRoomMembershipUpdateCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomMembershipUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State")))
@interface CybertronState : CybertronKotlinEnum<CybertronState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronState *active __attribute__((swift_name("active")));
@property (class, readonly) CybertronState *pending __attribute__((swift_name("pending")));
@property (class, readonly) CybertronState *visiting __attribute__((swift_name("visiting")));
@property (class, readonly) CybertronState *requested __attribute__((swift_name("requested")));
@property (class, readonly) CybertronState *spectator __attribute__((swift_name("spectator")));
@property (class, readonly) CybertronState *lurker __attribute__((swift_name("lurker")));
@property (class, readonly) CybertronState *left __attribute__((swift_name("left")));
@property (class, readonly) CybertronState *kicked __attribute__((swift_name("kicked")));
@property (class, readonly) CybertronState *denied __attribute__((swift_name("denied")));
@property (class, readonly) CybertronState *ignored __attribute__((swift_name("ignored")));
@property (class, readonly) CybertronState *none __attribute__((swift_name("none")));
+ (CybertronKotlinArray<CybertronState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visibility")))
@interface CybertronVisibility : CybertronKotlinEnum<CybertronVisibility *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronVisibility *secret __attribute__((swift_name("secret")));
@property (class, readonly) CybertronVisibility *friends __attribute__((swift_name("friends")));
@property (class, readonly) CybertronVisibility *friendsOfFriends __attribute__((swift_name("friendsOfFriends")));
@property (class, readonly) CybertronVisibility *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) CybertronVisibility *everyone __attribute__((swift_name("everyone")));
+ (CybertronKotlinArray<CybertronVisibility *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockedUsers")))
@interface CybertronBlockedUsers : CybertronBase
- (instancetype)initWithSkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronBlockedUsersResult *> * _Nullable)results total:(CybertronInt * _Nullable)total __attribute__((swift_name("init(skip:limit:results:total:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronBlockedUsersCompanion *companion __attribute__((swift_name("companion")));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronBlockedUsersResult *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronBlockedUsers *)doCopySkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronBlockedUsersResult *> * _Nullable)results total:(CybertronInt * _Nullable)total __attribute__((swift_name("doCopy(skip:limit:results:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<CybertronBlockedUsersResult *> * _Nullable results __attribute__((swift_name("results")));
@property (readonly) CybertronInt * _Nullable skip __attribute__((swift_name("skip")));
@property (readonly) CybertronInt * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockedUsers.Companion")))
@interface CybertronBlockedUsersCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronBlockedUsersCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockedUsersResult")))
@interface CybertronBlockedUsersResult : CybertronBase
- (instancetype)initWithUpdatedAt:(NSString * _Nullable)updatedAt createdAt:(NSString * _Nullable)createdAt reason:(NSString * _Nullable)reason user:(CybertronUser * _Nullable)user __attribute__((swift_name("init(updatedAt:createdAt:reason:user:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronBlockedUsersResultCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronUser * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronBlockedUsersResult *)doCopyUpdatedAt:(NSString * _Nullable)updatedAt createdAt:(NSString * _Nullable)createdAt reason:(NSString * _Nullable)reason user:(CybertronUser * _Nullable)user __attribute__((swift_name("doCopy(updatedAt:createdAt:reason:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockedUsersResult.Companion")))
@interface CybertronBlockedUsersResultCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronBlockedUsersResultCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buddy")))
@interface CybertronBuddy : CybertronBase
- (instancetype)initWithState:(NSString *)state user:(CybertronUser *)user membership:(CybertronState * _Nullable)membership invited:(BOOL)invited poked:(BOOL)poked __attribute__((swift_name("init(state:user:membership:invited:poked:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronUser *)component2 __attribute__((swift_name("component2()")));
- (CybertronState * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (CybertronBuddy *)doCopyState:(NSString *)state user:(CybertronUser *)user membership:(CybertronState * _Nullable)membership invited:(BOOL)invited poked:(BOOL)poked __attribute__((swift_name("doCopy(state:user:membership:invited:poked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isInvited __attribute__((swift_name("isInvited()")));
- (BOOL)isMember __attribute__((swift_name("isMember()")));
- (BOOL)isMutual __attribute__((swift_name("isMutual()")));
- (BOOL)isOnline __attribute__((swift_name("isOnline()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL invited __attribute__((swift_name("invited")));
@property CybertronState * _Nullable membership __attribute__((swift_name("membership")));
@property BOOL poked __attribute__((swift_name("poked")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) CybertronUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuddyList")))
@interface CybertronBuddyList : CybertronBase
- (instancetype)initWithTotalOnlineCount:(CybertronInt * _Nullable)totalOnlineCount results:(NSArray<CybertronBuddy *> *)results __attribute__((swift_name("init(totalOnlineCount:results:)"))) __attribute__((objc_designated_initializer));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<CybertronBuddy *> *)component2 __attribute__((swift_name("component2()")));
- (CybertronBuddyList *)doCopyTotalOnlineCount:(CybertronInt * _Nullable)totalOnlineCount results:(NSArray<CybertronBuddy *> *)results __attribute__((swift_name("doCopy(totalOnlineCount:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CybertronBuddy *> *results __attribute__((swift_name("results")));
@property CybertronInt * _Nullable totalOnlineCount __attribute__((swift_name("totalOnlineCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlagBody")))
@interface CybertronFlagBody : CybertronBase
- (instancetype)initWithType:(NSString * _Nullable)type reason:(NSString * _Nullable)reason isMedia:(CybertronBoolean * _Nullable)isMedia __attribute__((swift_name("init(type:reason:isMedia:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronFlagBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronFlagBody *)doCopyType:(NSString * _Nullable)type reason:(NSString * _Nullable)reason isMedia:(CybertronBoolean * _Nullable)isMedia __attribute__((swift_name("doCopy(type:reason:isMedia:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CybertronBoolean * _Nullable isMedia __attribute__((swift_name("isMedia")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlagBody.Companion")))
@interface CybertronFlagBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronFlagBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence_")))
@interface CybertronPresence_ : CybertronBase
- (instancetype)initWithConnectedTime:(NSString * _Nullable)connectedTime disconnectedTime:(NSString * _Nullable)disconnectedTime presenceStatus:(NSString * _Nullable)presenceStatus rooms:(NSArray<CybertronRoom *> * _Nullable)rooms __attribute__((swift_name("init(connectedTime:disconnectedTime:presenceStatus:rooms:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPresence_Companion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<CybertronRoom *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresence_ *)doCopyConnectedTime:(NSString * _Nullable)connectedTime disconnectedTime:(NSString * _Nullable)disconnectedTime presenceStatus:(NSString * _Nullable)presenceStatus rooms:(NSArray<CybertronRoom *> * _Nullable)rooms __attribute__((swift_name("doCopy(connectedTime:disconnectedTime:presenceStatus:rooms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isOnline __attribute__((swift_name("isOnline()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable connectedTime __attribute__((swift_name("connectedTime")));
@property (readonly) NSString * _Nullable disconnectedTime __attribute__((swift_name("disconnectedTime")));
@property (readonly) NSString * _Nullable presenceStatus __attribute__((swift_name("presenceStatus")));
@property (readonly) NSArray<CybertronRoom *> * _Nullable rooms __attribute__((swift_name("rooms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence_.Companion")))
@interface CybertronPresence_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresence_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionUser")))
@interface CybertronSessionUser : CybertronBase
- (instancetype)initWithId:(NSString *)id phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status __attribute__((swift_name("init(id:phone:email:bio:firstName:lastName:username:verified:certified:avatarUrl:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSessionUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (CybertronLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (CybertronLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSArray<NSString *> *)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronSessionUser *)doCopyId:(NSString *)id phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(id:phone:email:bio:firstName:lastName:username:verified:certified:avatarUrl:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) CybertronBoolean * _Nullable certified __attribute__((swift_name("certified")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) CybertronLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) CybertronLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionUser.Companion")))
@interface CybertronSessionUserCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSessionUserCompanion *shared __attribute__((swift_name("shared")));
- (CybertronSessionUser *)fromSessionUser:(CybertronSession *)sessionUser __attribute__((swift_name("from(sessionUser:)")));
- (CybertronSessionUser *)fromSessionUser_:(CybertronSessionUser_ *)sessionUser __attribute__((swift_name("from(sessionUser_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface CybertronUser : CybertronBase
- (instancetype)initWithId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount mutualFollowingCount:(CybertronLong * _Nullable)mutualFollowingCount twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername tags:(NSArray<NSString *> *)tags presence:(CybertronPresence_ * _Nullable)presence __attribute__((swift_name("init(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:twitterUrl:twitterUsername:instagramUrl:instagramUsername:tags:presence:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NSString *> *)component15 __attribute__((swift_name("component15()")));
- (CybertronPresence_ * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronLong * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronLong * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronUser *)doCopyId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount mutualFollowingCount:(CybertronLong * _Nullable)mutualFollowingCount twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername tags:(NSArray<NSString *> *)tags presence:(CybertronPresence_ * _Nullable)presence __attribute__((swift_name("doCopy(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:twitterUrl:twitterUsername:instagramUrl:instagramUsername:tags:presence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) CybertronLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) CybertronLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) CybertronLong * _Nullable mutualFollowingCount __attribute__((swift_name("mutualFollowingCount")));
@property (readonly) CybertronPresence_ * _Nullable presence __attribute__((swift_name("presence")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface CybertronUserCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mention")))
@interface CybertronMention : CybertronBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId rangeStart:(CybertronInt * _Nullable)rangeStart rangeEnd:(CybertronInt * _Nullable)rangeEnd __attribute__((swift_name("init(userId:rangeStart:rangeEnd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMentionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMention *)doCopyUserId:(NSString * _Nullable)userId rangeStart:(CybertronInt * _Nullable)rangeStart rangeEnd:(CybertronInt * _Nullable)rangeEnd __attribute__((swift_name("doCopy(userId:rangeStart:rangeEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable rangeEnd __attribute__((swift_name("rangeEnd")));
@property (readonly) CybertronInt * _Nullable rangeStart __attribute__((swift_name("rangeStart")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mention.Companion")))
@interface CybertronMentionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMentionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface CybertronMessage : CybertronBase
- (instancetype)initWithClientId:(NSString * _Nullable)clientId id:(NSString *)id roomId:(NSString * _Nullable)roomId user:(CybertronUser * _Nullable)user source:(NSString * _Nullable)source type:(CybertronMessageType *)type body:(CybertronMessageBody * _Nullable)body featuredViewers:(NSArray<CybertronUser *> * _Nullable)featuredViewers flags:(NSArray<CybertronMessageFlag *> * _Nullable)flags reactions:(NSArray<CybertronReaction *> * _Nullable)reactions createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt surveyOptions:(NSArray<CybertronSurveyOption *> * _Nullable)surveyOptions __attribute__((swift_name("init(clientId:id:roomId:user:source:type:body:featuredViewers:flags:reactions:createdAt:updatedAt:surveyOptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<CybertronReaction *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component11 __attribute__((swift_name("component11()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSArray<CybertronSurveyOption *> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronUser * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMessageType *)component6 __attribute__((swift_name("component6()")));
- (CybertronMessageBody * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<CybertronUser *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<CybertronMessageFlag *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessage *)doCopyClientId:(NSString * _Nullable)clientId id:(NSString *)id roomId:(NSString * _Nullable)roomId user:(CybertronUser * _Nullable)user source:(NSString * _Nullable)source type:(CybertronMessageType *)type body:(CybertronMessageBody * _Nullable)body featuredViewers:(NSArray<CybertronUser *> * _Nullable)featuredViewers flags:(NSArray<CybertronMessageFlag *> * _Nullable)flags reactions:(NSArray<CybertronReaction *> * _Nullable)reactions createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt surveyOptions:(NSArray<CybertronSurveyOption *> * _Nullable)surveyOptions __attribute__((swift_name("doCopy(clientId:id:roomId:user:source:type:body:featuredViewers:flags:reactions:createdAt:updatedAt:surveyOptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMessageBody * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSArray<CybertronUser *> * _Nullable featuredViewers __attribute__((swift_name("featuredViewers")));
@property (readonly) NSArray<CybertronMessageFlag *> * _Nullable flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<CybertronReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@property (readonly) NSArray<CybertronSurveyOption *> * _Nullable surveyOptions __attribute__((swift_name("surveyOptions")));
@property (readonly) CybertronMessageType *type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Companion")))
@interface CybertronMessageCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageData")))
@interface CybertronMessageData : CybertronBase
- (instancetype)initWithSkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronMessage *> *)results __attribute__((swift_name("init(skip:limit:results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageDataCompanion *companion __attribute__((swift_name("companion")));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronMessage *> *)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageData *)doCopySkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronMessage *> *)results __attribute__((swift_name("doCopy(skip:limit:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<CybertronMessage *> *results __attribute__((swift_name("results")));
@property (readonly) CybertronInt * _Nullable skip __attribute__((swift_name("skip")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageData.Companion")))
@interface CybertronMessageDataCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageFlag")))
@interface CybertronMessageFlag : CybertronBase
- (instancetype)initWithMessage:(NSString * _Nullable)message flagger:(NSString * _Nullable)flagger __attribute__((swift_name("init(message:flagger:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageFlagCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageFlag *)doCopyMessage:(NSString * _Nullable)message flagger:(NSString * _Nullable)flagger __attribute__((swift_name("doCopy(message:flagger:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable flagger __attribute__((swift_name("flagger")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageFlag.Companion")))
@interface CybertronMessageFlagCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLikeResult")))
@interface CybertronMessageLikeResult : CybertronBase
- (instancetype)initWithId:(NSString *)id username:(NSString * _Nullable)username firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName createdAt:(NSString * _Nullable)createdAt verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl reaction:(NSString * _Nullable)reaction __attribute__((swift_name("init(id:username:firstName:lastName:createdAt:verified:avatarUrl:reaction:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronMessageLikeResult *)doCopyId:(NSString *)id username:(NSString * _Nullable)username firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName createdAt:(NSString * _Nullable)createdAt verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl reaction:(NSString * _Nullable)reaction __attribute__((swift_name("doCopy(id:username:firstName:lastName:createdAt:verified:avatarUrl:reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable reaction __attribute__((swift_name("reaction")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLikeResultResponse")))
@interface CybertronMessageLikeResultResponse : CybertronBase
- (instancetype)initWithSkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronMessageLikeResult *> * _Nullable)results total:(CybertronInt * _Nullable)total __attribute__((swift_name("init(skip:limit:results:total:)"))) __attribute__((objc_designated_initializer));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronMessageLikeResult *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageLikeResultResponse *)doCopySkip:(CybertronInt * _Nullable)skip limit:(CybertronInt * _Nullable)limit results:(NSArray<CybertronMessageLikeResult *> * _Nullable)results total:(CybertronInt * _Nullable)total __attribute__((swift_name("doCopy(skip:limit:results:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<CybertronMessageLikeResult *> * _Nullable results __attribute__((swift_name("results")));
@property (readonly) CybertronInt * _Nullable skip __attribute__((swift_name("skip")));
@property (readonly) CybertronInt * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLink")))
@interface CybertronMessageLink : CybertronBase
- (instancetype)initWithLink:(NSString * _Nullable)link __attribute__((swift_name("init(link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageLinkCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronMessageLink *)doCopyLink:(NSString * _Nullable)link __attribute__((swift_name("doCopy(link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLink.Companion")))
@interface CybertronMessageLinkCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLinkBody")))
@interface CybertronMessageLinkBody : CybertronBase
- (instancetype)initWithType:(CybertronMessageType * _Nullable)type share:(CybertronBoolean * _Nullable)share __attribute__((swift_name("init(type:share:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageLinkBodyCompanion *companion __attribute__((swift_name("companion")));
- (CybertronMessageType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageLinkBody *)doCopyType:(CybertronMessageType * _Nullable)type share:(CybertronBoolean * _Nullable)share __attribute__((swift_name("doCopy(type:share:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronBoolean * _Nullable share __attribute__((swift_name("share")));
@property (readonly) CybertronMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLinkBody.Companion")))
@interface CybertronMessageLinkBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageLinkBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType")))
@interface CybertronMessageType : CybertronKotlinEnum<CybertronMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronMessageType *text __attribute__((swift_name("text")));
@property (class, readonly) CybertronMessageType *url __attribute__((swift_name("url")));
@property (class, readonly) CybertronMessageType *images __attribute__((swift_name("images")));
@property (class, readonly) CybertronMessageType *location __attribute__((swift_name("location")));
@property (class, readonly) CybertronMessageType *video __attribute__((swift_name("video")));
@property (class, readonly) CybertronMessageType *youtube __attribute__((swift_name("youtube")));
@property (class, readonly) CybertronMessageType *twitch __attribute__((swift_name("twitch")));
@property (class, readonly) CybertronMessageType *soundcloud __attribute__((swift_name("soundcloud")));
@property (class, readonly) CybertronMessageType *info __attribute__((swift_name("info")));
@property (class, readonly) CybertronMessageType *audio __attribute__((swift_name("audio")));
@property (class, readonly) CybertronMessageType *room __attribute__((swift_name("room")));
@property (class, readonly) CybertronMessageType *user __attribute__((swift_name("user")));
@property (class, readonly) CybertronMessageType *hls __attribute__((swift_name("hls")));
@property (class, readonly) CybertronMessageType *vimeo __attribute__((swift_name("vimeo")));
@property (class, readonly) CybertronMessageType *snackable __attribute__((swift_name("snackable")));
@property (class, readonly) CybertronMessageType *playlist __attribute__((swift_name("playlist")));
@property (class, readonly) CybertronMessageType *groupDigest __attribute__((swift_name("groupDigest")));
@property (class, readonly) CybertronMessageType *event __attribute__((swift_name("event")));
@property (class, readonly) CybertronMessageType *app __attribute__((swift_name("app")));
@property (class, readonly) CybertronMessageType *unknown __attribute__((swift_name("unknown")));
+ (CybertronKotlinArray<CybertronMessageType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageType.Companion")))
@interface CybertronMessageTypeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reaction")))
@interface CybertronReaction : CybertronBase
- (instancetype)initWithCount:(CybertronInt * _Nullable)count reaction:(NSString * _Nullable)reaction users:(NSArray<NSString *> * _Nullable)users __attribute__((swift_name("init(count:reaction:users:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronReactionCompanion *companion __attribute__((swift_name("companion")));
- (CybertronInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronReaction *)doCopyCount:(CybertronInt * _Nullable)count reaction:(NSString * _Nullable)reaction users:(NSArray<NSString *> * _Nullable)users __attribute__((swift_name("doCopy(count:reaction:users:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable reaction __attribute__((swift_name("reaction")));
@property (readonly) NSArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reaction.Companion")))
@interface CybertronReactionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyOption")))
@interface CybertronSurveyOption : CybertronBase
- (instancetype)initWithKey:(NSString *)key value:(NSString * _Nullable)value type:(NSString * _Nullable)type __attribute__((swift_name("init(key:value:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSurveyOptionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronSurveyOption *)doCopyKey:(NSString *)key value:(NSString * _Nullable)value type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(key:value:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyOption.Companion")))
@interface CybertronSurveyOptionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSurveyOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageFactory")))
@interface CybertronMessageFactory : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronMessageFactoryCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageFactory.Companion")))
@interface CybertronMessageFactoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageFactoryCompanion *shared __attribute__((swift_name("shared")));
- (CybertronMessage *)createAppMessageRoomId:(NSString *)roomId text:(NSString *)text subType:(NSString * _Nullable)subType image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description __attribute__((swift_name("createAppMessage(roomId:text:subType:image:video:url:title:description:)")));
- (CybertronMessage *)createAudioMessageRoomId:(NSString *)roomId text:(NSString * _Nullable)text duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title description:(NSString * _Nullable)description __attribute__((swift_name("createAudioMessage(roomId:text:duration:title:description:)")));
- (CybertronMessage *)createHlsMessageRoomId:(NSString *)roomId text:(NSString *)text type:(NSString * _Nullable)type site_name:(NSString * _Nullable)site_name image:(CybertronImage * _Nullable)image url:(NSString * _Nullable)url title:(NSString * _Nullable)title originalUrl:(NSString * _Nullable)originalUrl description:(NSString * _Nullable)description __attribute__((swift_name("createHlsMessage(roomId:text:type:site_name:image:url:title:originalUrl:description:)")));
- (CybertronMessage *)createImageMessageRoomId:(NSString *)roomId text:(NSString *)text images:(NSArray<CybertronImage *> *)images __attribute__((swift_name("createImageMessage(roomId:text:images:)")));
- (CybertronMessage *)createLocationMessageRoomId:(NSString *)roomId text:(NSString *)text image:(CybertronImage * _Nullable)image name:(NSString * _Nullable)name description:(NSString * _Nullable)description priceRange:(CybertronInt * _Nullable)priceRange url:(NSString * _Nullable)url rating:(CybertronFloat * _Nullable)rating location:(CybertronMessageBodyLocation * _Nullable)location __attribute__((swift_name("createLocationMessage(roomId:text:image:name:description:priceRange:url:rating:location:)")));
- (CybertronMessage *)createSoundcloudMessageRoomId:(NSString *)roomId text:(NSString *)text url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl streamUrl:(NSString * _Nullable)streamUrl duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image tracks:(CybertronInt * _Nullable)tracks username:(NSString * _Nullable)username __attribute__((swift_name("createSoundcloudMessage(roomId:text:url:originalUrl:streamUrl:duration:title:description:image:tracks:username:)")));
- (CybertronMessage *)createTextMessageRoomId:(NSString *)roomId text:(NSString *)text __attribute__((swift_name("createTextMessage(roomId:text:)")));
- (CybertronMessage *)createTextMessageRoomId:(NSString *)roomId text:(NSString *)text mentions:(NSArray<CybertronMention *> *)mentions __attribute__((swift_name("createTextMessage(roomId:text:mentions:)")));
- (CybertronMessage *)createTwitchMessageRoomId:(NSString *)roomId text:(NSString *)text type:(NSString * _Nullable)type name:(NSString * _Nullable)name url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration views:(CybertronInt * _Nullable)views image:(CybertronImage * _Nullable)image viewers:(CybertronInt * _Nullable)viewers followers:(CybertronInt * _Nullable)followers game:(NSString * _Nullable)game displayName:(NSString * _Nullable)displayName __attribute__((swift_name("createTwitchMessage(roomId:text:type:name:url:duration:views:image:viewers:followers:game:displayName:)")));
- (CybertronMessage *)createUrlMessageRoomId:(NSString *)roomId text:(NSString *)text url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video favicon:(CybertronMessageBodyFavIcon * _Nullable)favicon __attribute__((swift_name("createUrlMessage(roomId:text:url:originalUrl:title:description:image:video:favicon:)")));
- (CybertronMessage *)createVideoMessageRoomId:(NSString *)roomId text:(NSString *)text video:(CybertronMessageBodyVideo * _Nullable)video thumbnail:(CybertronMessageBodyThumbnail * _Nullable)thumbnail __attribute__((swift_name("createVideoMessage(roomId:text:video:thumbnail:)")));
- (CybertronMessage *)createVimeoMessageRoomId:(NSString *)roomId text:(NSString *)text type:(NSString * _Nullable)type url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description duration:(CybertronInt * _Nullable)duration width:(CybertronInt * _Nullable)width height:(CybertronInt * _Nullable)height image:(CybertronImage * _Nullable)image __attribute__((swift_name("createVimeoMessage(roomId:text:type:url:title:description:duration:width:height:image:)")));
- (CybertronMessage *)createYoutubeMessageRoomId:(NSString *)roomId text:(NSString *)text url:(NSString * _Nullable)url site_name:(NSString * _Nullable)site_name title:(NSString * _Nullable)title image:(CybertronImage * _Nullable)image description:(NSString * _Nullable)description viewCount:(NSString * _Nullable)viewCount __attribute__((swift_name("createYoutubeMessage(roomId:text:url:site_name:title:image:description:viewCount:)")));
@end;

__attribute__((swift_name("MessageBody")))
@interface CybertronMessageBody : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronMessageBodyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((swift_name("MessageBody.InfoMessageBody")))
@interface CybertronMessageBodyInfoMessageBody : CybertronMessageBody
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronMessageBodyInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyInfoMessageBody")))
@interface CybertronEmptyInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type __attribute__((swift_name("init(text:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronEmptyInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronEmptyInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type __attribute__((swift_name("doCopy(text:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyInfoMessageBody.Companion")))
@interface CybertronEmptyInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronEmptyInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoMessageType")))
@interface CybertronInfoMessageType : CybertronKotlinEnum<CybertronInfoMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronInfoMessageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronInfoMessageType *presenceSummary __attribute__((swift_name("presenceSummary")));
@property (class, readonly) CybertronInfoMessageType *presence __attribute__((swift_name("presence")));
@property (class, readonly) CybertronInfoMessageType *roomTitle __attribute__((swift_name("roomTitle")));
@property (class, readonly) CybertronInfoMessageType *roomTopic __attribute__((swift_name("roomTopic")));
@property (class, readonly) CybertronInfoMessageType *roomTags __attribute__((swift_name("roomTags")));
@property (class, readonly) CybertronInfoMessageType *roomColor __attribute__((swift_name("roomColor")));
@property (class, readonly) CybertronInfoMessageType *roomMode __attribute__((swift_name("roomMode")));
@property (class, readonly) CybertronInfoMessageType *summon __attribute__((swift_name("summon")));
@property (class, readonly) CybertronInfoMessageType *roomAccessibility __attribute__((swift_name("roomAccessibility")));
@property (class, readonly) CybertronInfoMessageType *roomRequest __attribute__((swift_name("roomRequest")));
@property (class, readonly) CybertronInfoMessageType *kicked __attribute__((swift_name("kicked")));
@property (class, readonly) CybertronInfoMessageType *joined __attribute__((swift_name("joined")));
@property (class, readonly) CybertronInfoMessageType *invited __attribute__((swift_name("invited")));
@property (class, readonly) CybertronInfoMessageType *roomRequestAccepted __attribute__((swift_name("roomRequestAccepted")));
@property (class, readonly) CybertronInfoMessageType *roomRequestDeclined __attribute__((swift_name("roomRequestDeclined")));
@property (class, readonly) CybertronInfoMessageType *roomCallSummary __attribute__((swift_name("roomCallSummary")));
@property (class, readonly) CybertronInfoMessageType *roomVisibility __attribute__((swift_name("roomVisibility")));
@property (class, readonly) CybertronInfoMessageType *roomHistoryCleared __attribute__((swift_name("roomHistoryCleared")));
@property (class, readonly) CybertronInfoMessageType *roomDoorbell __attribute__((swift_name("roomDoorbell")));
@property (class, readonly) CybertronInfoMessageType *roomCreated __attribute__((swift_name("roomCreated")));
@property (class, readonly) CybertronInfoMessageType *userPresent __attribute__((swift_name("userPresent")));
@property (class, readonly) CybertronInfoMessageType *userPresentDelete __attribute__((swift_name("userPresentDelete")));
@property (class, readonly) CybertronInfoMessageType *messageDelete __attribute__((swift_name("messageDelete")));
@property (class, readonly) CybertronInfoMessageType *party __attribute__((swift_name("party")));
@property (class, readonly) CybertronInfoMessageType *userPublish __attribute__((swift_name("userPublish")));
@property (class, readonly) CybertronInfoMessageType *track __attribute__((swift_name("track")));
@property (class, readonly) CybertronInfoMessageType *album __attribute__((swift_name("album")));
@property (class, readonly) CybertronInfoMessageType *playlist __attribute__((swift_name("playlist")));
@property (class, readonly) CybertronInfoMessageType *roomRequestCreated __attribute__((swift_name("roomRequestCreated")));
@property (class, readonly) CybertronInfoMessageType *roomInviteCreated __attribute__((swift_name("roomInviteCreated")));
@property (class, readonly) CybertronInfoMessageType *added __attribute__((swift_name("added")));
@property (class, readonly) CybertronInfoMessageType *ejected __attribute__((swift_name("ejected")));
@property (class, readonly) CybertronInfoMessageType *banned __attribute__((swift_name("banned")));
@property (class, readonly) CybertronInfoMessageType *unknown __attribute__((swift_name("unknown")));
+ (CybertronKotlinArray<CybertronInfoMessageType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoMessageType.Companion")))
@interface CybertronInfoMessageTypeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronInfoMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.AppMessageBody")))
@interface CybertronMessageBodyAppMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text id:(NSString * _Nullable)id subType:(NSString * _Nullable)subType image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description __attribute__((swift_name("init(text:id:subType:image:video:url:title:description:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyAppMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronImage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageBodyVideo * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronMessageBodyAppMessageBody *)doCopyText:(NSString * _Nullable)text id:(NSString * _Nullable)id subType:(NSString * _Nullable)subType image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(text:id:subType:image:video:url:title:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable subType __attribute__((swift_name("subType")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) CybertronMessageBodyVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.AppMessageBodyCompanion")))
@interface CybertronMessageBodyAppMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyAppMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.AudioMessageBody")))
@interface CybertronMessageBodyAudioMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title __attribute__((swift_name("init(text:url:duration:title:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyAudioMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageBodyAudioMessageBody *)doCopyText:(NSString * _Nullable)text url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(text:url:duration:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.AudioMessageBodyCompanion")))
@interface CybertronMessageBodyAudioMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyAudioMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.Companion")))
@interface CybertronMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(CybertronKotlinArray<id<CybertronKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.FavIcon")))
@interface CybertronMessageBodyFavIcon : CybertronBase
- (instancetype)initWithUrl:(NSString * _Nullable)url size:(CybertronInt * _Nullable)size optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("init(url:size:optimizedUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyFavIconCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageBodyFavIcon *)doCopyUrl:(NSString * _Nullable)url size:(CybertronInt * _Nullable)size optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("doCopy(url:size:optimizedUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) CybertronInt * _Nullable size __attribute__((swift_name("size")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.FavIconCompanion")))
@interface CybertronMessageBodyFavIconCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyFavIconCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.HlsMessageBody")))
@interface CybertronMessageBodyHlsMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(NSString * _Nullable)type site_name:(NSString * _Nullable)site_name image:(CybertronImage * _Nullable)image url:(NSString * _Nullable)url title:(NSString * _Nullable)title originalUrl:(NSString * _Nullable)originalUrl description:(NSString * _Nullable)description __attribute__((swift_name("init(text:type:site_name:image:url:title:originalUrl:description:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyHlsMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronImage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronMessageBodyHlsMessageBody *)doCopyText:(NSString * _Nullable)text type:(NSString * _Nullable)type site_name:(NSString * _Nullable)site_name image:(CybertronImage * _Nullable)image url:(NSString * _Nullable)url title:(NSString * _Nullable)title originalUrl:(NSString * _Nullable)originalUrl description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(text:type:site_name:image:url:title:originalUrl:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) NSString * _Nullable site_name __attribute__((swift_name("site_name")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.HlsMessageBodyCompanion")))
@interface CybertronMessageBodyHlsMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyHlsMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.ImageMessageBody")))
@interface CybertronMessageBodyImageMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text images:(NSArray<CybertronImage *> * _Nullable)images __attribute__((swift_name("init(text:images:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyImageMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<CybertronImage *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageBodyImageMessageBody *)doCopyText:(NSString * _Nullable)text images:(NSArray<CybertronImage *> * _Nullable)images __attribute__((swift_name("doCopy(text:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CybertronImage *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.ImageMessageBodyCompanion")))
@interface CybertronMessageBodyImageMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyImageMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.InfoMessageBodyCompanion")))
@interface CybertronMessageBodyInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<CybertronKotlinx_serialization_coreKSerializer> _Nullable)serializerSubMessageType:(CybertronInfoMessageType *)subMessageType __attribute__((swift_name("serializer(subMessageType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.Location")))
@interface CybertronMessageBodyLocation : CybertronBase
- (instancetype)initWithLat:(CybertronFloat * _Nullable)lat long:(CybertronFloat * _Nullable)long_ __attribute__((swift_name("init(lat:long:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyLocationCompanion *companion __attribute__((swift_name("companion")));
- (CybertronFloat * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronFloat * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageBodyLocation *)doCopyLat:(CybertronFloat * _Nullable)lat long:(CybertronFloat * _Nullable)long_ __attribute__((swift_name("doCopy(lat:long:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronFloat * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly, getter=long) CybertronFloat * _Nullable long_ __attribute__((swift_name("long_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.LocationCompanion")))
@interface CybertronMessageBodyLocationCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.LocationMessageBody")))
@interface CybertronMessageBodyLocationMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text image:(CybertronImage * _Nullable)image name:(NSString * _Nullable)name description:(NSString * _Nullable)description priceRange:(CybertronInt * _Nullable)priceRange url:(NSString * _Nullable)url rating:(CybertronFloat * _Nullable)rating location:(CybertronMessageBodyLocation * _Nullable)location __attribute__((swift_name("init(text:image:name:description:priceRange:url:rating:location:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyLocationMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronImage * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronFloat * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronMessageBodyLocation * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronMessageBodyLocationMessageBody *)doCopyText:(NSString * _Nullable)text image:(CybertronImage * _Nullable)image name:(NSString * _Nullable)name description:(NSString * _Nullable)description priceRange:(CybertronInt * _Nullable)priceRange url:(NSString * _Nullable)url rating:(CybertronFloat * _Nullable)rating location:(CybertronMessageBodyLocation * _Nullable)location __attribute__((swift_name("doCopy(text:image:name:description:priceRange:url:rating:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CybertronMessageBodyLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CybertronInt * _Nullable priceRange __attribute__((swift_name("priceRange")));
@property (readonly) CybertronFloat * _Nullable rating __attribute__((swift_name("rating")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.LocationMessageBodyCompanion")))
@interface CybertronMessageBodyLocationMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyLocationMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.PlaylistMessageBody")))
@interface CybertronMessageBodyPlaylistMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text id:(NSString * _Nullable)id name:(NSString * _Nullable)name image:(CybertronImage * _Nullable)image description:(NSString * _Nullable)description preview:(NSArray<CybertronMessage *> * _Nullable)preview __attribute__((swift_name("init(text:id:name:image:description:preview:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyPlaylistMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronImage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<CybertronMessage *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronMessageBodyPlaylistMessageBody *)doCopyText:(NSString * _Nullable)text id:(NSString * _Nullable)id name:(NSString * _Nullable)name image:(CybertronImage * _Nullable)image description:(NSString * _Nullable)description preview:(NSArray<CybertronMessage *> * _Nullable)preview __attribute__((swift_name("doCopy(text:id:name:image:description:preview:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSArray<CybertronMessage *> * _Nullable preview __attribute__((swift_name("preview")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.PlaylistMessageBodyCompanion")))
@interface CybertronMessageBodyPlaylistMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyPlaylistMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.Recipient")))
@interface CybertronMessageBodyRecipient : CybertronBase
- (instancetype)initWithId:(NSString * _Nullable)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username __attribute__((swift_name("init(id:firstName:lastName:username:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyRecipientCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageBodyRecipient *)doCopyId:(NSString * _Nullable)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username __attribute__((swift_name("doCopy(id:firstName:lastName:username:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.RecipientCompanion")))
@interface CybertronMessageBodyRecipientCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyRecipientCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.SoundcloudMessageBody")))
@interface CybertronMessageBodySoundcloudMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text id:(NSString * _Nullable)id url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl streamUrl:(NSString * _Nullable)streamUrl duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image tracks:(CybertronInt * _Nullable)tracks username:(NSString * _Nullable)username __attribute__((swift_name("init(text:id:url:originalUrl:streamUrl:duration:title:description:image:tracks:username:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodySoundcloudMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronImage * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessageBodySoundcloudMessageBody *)doCopyText:(NSString * _Nullable)text id:(NSString * _Nullable)id url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl streamUrl:(NSString * _Nullable)streamUrl duration:(CybertronInt * _Nullable)duration title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image tracks:(CybertronInt * _Nullable)tracks username:(NSString * _Nullable)username __attribute__((swift_name("doCopy(text:id:url:originalUrl:streamUrl:duration:title:description:image:tracks:username:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) NSString * _Nullable streamUrl __attribute__((swift_name("streamUrl")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) CybertronInt * _Nullable tracks __attribute__((swift_name("tracks")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.SoundcloudMessageBodyCompanion")))
@interface CybertronMessageBodySoundcloudMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodySoundcloudMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.TextMessageBody")))
@interface CybertronMessageBodyTextMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text mentions:(NSArray<CybertronMention *> * _Nullable)mentions __attribute__((swift_name("init(text:mentions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyTextMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<CybertronMention *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageBodyTextMessageBody *)doCopyText:(NSString * _Nullable)text mentions:(NSArray<CybertronMention *> * _Nullable)mentions __attribute__((swift_name("doCopy(text:mentions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CybertronMention *> * _Nullable mentions __attribute__((swift_name("mentions")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.TextMessageBodyCompanion")))
@interface CybertronMessageBodyTextMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyTextMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.Thumbnail")))
@interface CybertronMessageBodyThumbnail : CybertronBase
- (instancetype)initWithHeight:(NSString * _Nullable)height width:(NSString * _Nullable)width url:(NSString * _Nullable)url optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("init(height:width:url:optimizedUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyThumbnailCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageBodyThumbnail *)doCopyHeight:(NSString * _Nullable)height width:(NSString * _Nullable)width url:(NSString * _Nullable)url optimizedUrl:(NSString * _Nullable)optimizedUrl __attribute__((swift_name("doCopy(height:width:url:optimizedUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.ThumbnailCompanion")))
@interface CybertronMessageBodyThumbnailCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyThumbnailCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.TwitchMessageBody")))
@interface CybertronMessageBodyTwitchMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(NSString * _Nullable)type name:(NSString * _Nullable)name id:(NSString * _Nullable)id url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration views:(CybertronInt * _Nullable)views image:(CybertronImage * _Nullable)image viewers:(CybertronInt * _Nullable)viewers followers:(CybertronInt * _Nullable)followers game:(NSString * _Nullable)game displayName:(NSString * _Nullable)displayName __attribute__((swift_name("init(text:type:name:id:url:duration:views:image:viewers:followers:game:displayName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyTwitchMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInt * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronImage * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessageBodyTwitchMessageBody *)doCopyText:(NSString * _Nullable)text type:(NSString * _Nullable)type name:(NSString * _Nullable)name id:(NSString * _Nullable)id url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration views:(CybertronInt * _Nullable)views image:(CybertronImage * _Nullable)image viewers:(CybertronInt * _Nullable)viewers followers:(CybertronInt * _Nullable)followers game:(NSString * _Nullable)game displayName:(NSString * _Nullable)displayName __attribute__((swift_name("doCopy(text:type:name:id:url:duration:views:image:viewers:followers:game:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) CybertronInt * _Nullable followers __attribute__((swift_name("followers")));
@property (readonly) NSString * _Nullable game __attribute__((swift_name("game")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) CybertronInt * _Nullable viewers __attribute__((swift_name("viewers")));
@property (readonly) CybertronInt * _Nullable views __attribute__((swift_name("views")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.TwitchMessageBodyCompanion")))
@interface CybertronMessageBodyTwitchMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyTwitchMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UnknownMessageBody")))
@interface CybertronMessageBodyUnknownMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text __attribute__((swift_name("init(text:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyUnknownMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronMessageBodyUnknownMessageBody *)doCopyText:(NSString * _Nullable)text __attribute__((swift_name("doCopy(text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UnknownMessageBodyCompanion")))
@interface CybertronMessageBodyUnknownMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyUnknownMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UrlMessageBody")))
@interface CybertronMessageBodyUrlMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video favicon:(CybertronMessageBodyFavIcon * _Nullable)favicon metadata:(CybertronMessageBodyUrlMessageBodyMetadata * _Nullable)metadata __attribute__((swift_name("init(text:url:originalUrl:title:description:image:video:favicon:metadata:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyUrlMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronImage * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronMessageBodyVideo * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronMessageBodyFavIcon * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronMessageBodyUrlMessageBodyMetadata * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessageBodyUrlMessageBody *)doCopyText:(NSString * _Nullable)text url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl title:(NSString * _Nullable)title description:(NSString * _Nullable)description image:(CybertronImage * _Nullable)image video:(CybertronMessageBodyVideo * _Nullable)video favicon:(CybertronMessageBodyFavIcon * _Nullable)favicon metadata:(CybertronMessageBodyUrlMessageBodyMetadata * _Nullable)metadata __attribute__((swift_name("doCopy(text:url:originalUrl:title:description:image:video:favicon:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronMessageBodyFavIcon * _Nullable favicon __attribute__((swift_name("favicon")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) CybertronMessageBodyUrlMessageBodyMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) CybertronMessageBodyVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UrlMessageBodyCompanion")))
@interface CybertronMessageBodyUrlMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyUrlMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UrlMessageBodyMetadata")))
@interface CybertronMessageBodyUrlMessageBodyMetadata : CybertronBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId roomId:(NSString * _Nullable)roomId room:(CybertronRoom * _Nullable)room user:(CybertronUser * _Nullable)user __attribute__((swift_name("init(userId:roomId:room:user:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyUrlMessageBodyMetadataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronRoom * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronUser * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronMessageBodyUrlMessageBodyMetadata *)doCopyUserId:(NSString * _Nullable)userId roomId:(NSString * _Nullable)roomId room:(CybertronRoom * _Nullable)room user:(CybertronUser * _Nullable)user __attribute__((swift_name("doCopy(userId:roomId:room:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronRoom * _Nullable room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property (readonly) CybertronUser * _Nullable user __attribute__((swift_name("user")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.UrlMessageBodyMetadataCompanion")))
@interface CybertronMessageBodyUrlMessageBodyMetadataCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyUrlMessageBodyMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.Video")))
@interface CybertronMessageBodyVideo : CybertronBase
- (instancetype)initWithTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration image:(CybertronImage * _Nullable)image __attribute__((swift_name("init(title:description:url:duration:image:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronMessageBodyVideoCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronImage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMessageBodyVideo *)doCopyTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description url:(NSString * _Nullable)url duration:(CybertronInt * _Nullable)duration image:(CybertronImage * _Nullable)image __attribute__((swift_name("doCopy(title:description:url:duration:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.VideoCompanion")))
@interface CybertronMessageBodyVideoCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyVideoCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.VideoMessageBody")))
@interface CybertronMessageBodyVideoMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text video:(CybertronMessageBodyVideo * _Nullable)video thumbnail:(CybertronMessageBodyThumbnail * _Nullable)thumbnail __attribute__((swift_name("init(text:video:thumbnail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyVideoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronMessageBodyVideo * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageBodyThumbnail * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageBodyVideoMessageBody *)doCopyText:(NSString * _Nullable)text video:(CybertronMessageBodyVideo * _Nullable)video thumbnail:(CybertronMessageBodyThumbnail * _Nullable)thumbnail __attribute__((swift_name("doCopy(text:video:thumbnail:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronMessageBodyThumbnail * _Nullable thumbnail __attribute__((swift_name("thumbnail")));
@property (readonly) CybertronMessageBodyVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.VideoMessageBodyCompanion")))
@interface CybertronMessageBodyVideoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyVideoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.VimeoMessageBody")))
@interface CybertronMessageBodyVimeoMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text id:(NSString * _Nullable)id type:(NSString * _Nullable)type url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description duration:(CybertronInt * _Nullable)duration width:(CybertronInt * _Nullable)width height:(CybertronInt * _Nullable)height image:(CybertronImage * _Nullable)image __attribute__((swift_name("init(text:id:type:url:title:description:duration:width:height:image:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyVimeoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronImage * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessageBodyVimeoMessageBody *)doCopyText:(NSString * _Nullable)text id:(NSString * _Nullable)id type:(NSString * _Nullable)type url:(NSString * _Nullable)url title:(NSString * _Nullable)title description:(NSString * _Nullable)description duration:(CybertronInt * _Nullable)duration width:(CybertronInt * _Nullable)width height:(CybertronInt * _Nullable)height image:(CybertronImage * _Nullable)image __attribute__((swift_name("doCopy(text:id:type:url:title:description:duration:width:height:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) CybertronInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) CybertronInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.VimeoMessageBodyCompanion")))
@interface CybertronMessageBodyVimeoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyVimeoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.YoutubeMessageBody")))
@interface CybertronMessageBodyYoutubeMessageBody : CybertronMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text url:(NSString * _Nullable)url site_name:(NSString * _Nullable)site_name title:(NSString * _Nullable)title image:(CybertronImage * _Nullable)image description:(NSString * _Nullable)description viewCount:(NSString * _Nullable)viewCount __attribute__((swift_name("init(text:url:site_name:title:image:description:viewCount:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageBodyYoutubeMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronImage * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronMessageBodyYoutubeMessageBody *)doCopyText:(NSString * _Nullable)text url:(NSString * _Nullable)url site_name:(NSString * _Nullable)site_name title:(NSString * _Nullable)title image:(CybertronImage * _Nullable)image description:(NSString * _Nullable)description viewCount:(NSString * _Nullable)viewCount __attribute__((swift_name("doCopy(text:url:site_name:title:image:description:viewCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) CybertronImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable site_name __attribute__((swift_name("site_name")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable viewCount __attribute__((swift_name("viewCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageBody.YoutubeMessageBodyCompanion")))
@interface CybertronMessageBodyYoutubeMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageBodyYoutubeMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageDeleteInfoMessageBody")))
@interface CybertronMessageDeleteInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type messageType:(CybertronMessageType *)messageType __attribute__((swift_name("init(text:type:messageType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronMessageDeleteInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronMessageType *)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageDeleteInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type messageType:(CybertronMessageType *)messageType __attribute__((swift_name("doCopy(text:type:messageType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMessageType *messageType __attribute__((swift_name("messageType")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageDeleteInfoMessageBody.Companion")))
@interface CybertronMessageDeleteInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMessageDeleteInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceSummaryInfoMessageBody")))
@interface CybertronPresenceSummaryInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type users:(NSArray<CybertronUserInfoMessageBody *> *)users count:(CybertronInt * _Nullable)count __attribute__((swift_name("init(text:type:users:count:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPresenceSummaryInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronUserInfoMessageBody *> *)component3 __attribute__((swift_name("component3()")));
- (CybertronInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresenceSummaryInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type users:(NSArray<CybertronUserInfoMessageBody *> *)users count:(CybertronInt * _Nullable)count __attribute__((swift_name("doCopy(text:type:users:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSArray<CybertronUserInfoMessageBody *> *users __attribute__((swift_name("users")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceSummaryInfoMessageBody.Companion")))
@interface CybertronPresenceSummaryInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceSummaryInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceUser")))
@interface CybertronPresenceUser : CybertronBase
- (instancetype)initWithEnteredAt:(NSString * _Nullable)enteredAt id:(NSString * _Nullable)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName __attribute__((swift_name("init(enteredAt:id:firstName:lastName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPresenceUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresenceUser *)doCopyEnteredAt:(NSString * _Nullable)enteredAt id:(NSString * _Nullable)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName __attribute__((swift_name("doCopy(enteredAt:id:firstName:lastName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable enteredAt __attribute__((swift_name("enteredAt")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceUser.Companion")))
@interface CybertronPresenceUserCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceUserCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceUserInfoMessageBody")))
@interface CybertronPresenceUserInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type users:(NSArray<CybertronPresenceUser *> * _Nullable)users count:(CybertronInt * _Nullable)count __attribute__((swift_name("init(text:type:users:count:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPresenceUserInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronPresenceUser *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresenceUserInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type users:(NSArray<CybertronPresenceUser *> * _Nullable)users count:(CybertronInt * _Nullable)count __attribute__((swift_name("doCopy(text:type:users:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronInt * _Nullable count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSArray<CybertronPresenceUser *> * _Nullable users __attribute__((swift_name("users")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceUserInfoMessageBody.Companion")))
@interface CybertronPresenceUserInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceUserInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipientInfoMessageBody")))
@interface CybertronRecipientInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type recipients:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)recipients __attribute__((swift_name("init(text:type:recipients:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRecipientInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CybertronMessageBodyRecipient *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRecipientInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type recipients:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)recipients __attribute__((swift_name("doCopy(text:type:recipients:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CybertronMessageBodyRecipient *> * _Nullable recipients __attribute__((swift_name("recipients")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipientInfoMessageBody.Companion")))
@interface CybertronRecipientInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRecipientInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request")))
@interface CybertronRequest : CybertronBase
- (instancetype)initWithAction:(NSString * _Nullable)action id:(NSString * _Nullable)id room:(CybertronRoom *)room user:(CybertronUser *)user actingUser:(CybertronUser *)actingUser type:(NSString * _Nullable)type goLiveAudioOnly:(BOOL)goLiveAudioOnly state:(NSString * _Nullable)state updatedAt:(NSString * _Nullable)updatedAt inviter:(NSString * _Nullable)inviter __attribute__((swift_name("init(action:id:room:user:actingUser:type:goLiveAudioOnly:state:updatedAt:inviter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronRoom *)component3 __attribute__((swift_name("component3()")));
- (CybertronUser *)component4 __attribute__((swift_name("component4()")));
- (CybertronUser *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronRequest *)doCopyAction:(NSString * _Nullable)action id:(NSString * _Nullable)id room:(CybertronRoom *)room user:(CybertronUser *)user actingUser:(CybertronUser *)actingUser type:(NSString * _Nullable)type goLiveAudioOnly:(BOOL)goLiveAudioOnly state:(NSString * _Nullable)state updatedAt:(NSString * _Nullable)updatedAt inviter:(NSString * _Nullable)inviter __attribute__((swift_name("doCopy(action:id:room:user:actingUser:type:goLiveAudioOnly:state:updatedAt:inviter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronUser *actingUser __attribute__((swift_name("actingUser")));
@property (readonly) NSString * _Nullable action __attribute__((swift_name("action")));
@property (readonly) BOOL goLiveAudioOnly __attribute__((swift_name("goLiveAudioOnly")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable inviter __attribute__((swift_name("inviter")));
@property (readonly) CybertronRoom *room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request.Companion")))
@interface CybertronRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInfoMessageBody")))
@interface CybertronRequestInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type request:(CybertronRequest * _Nullable)request __attribute__((swift_name("init(text:type:request:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRequestInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronRequest * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRequestInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type request:(CybertronRequest * _Nullable)request __attribute__((swift_name("doCopy(text:type:request:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronRequest * _Nullable request __attribute__((swift_name("request")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInfoMessageBody.Companion")))
@interface CybertronRequestInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRequestInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomAccessibilityInfoMessageBody")))
@interface CybertronRoomAccessibilityInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type accessibility:(CybertronAccessibility *)accessibility __attribute__((swift_name("init(text:type:accessibility:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomAccessibilityInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronAccessibility *)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomAccessibilityInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type accessibility:(CybertronAccessibility *)accessibility __attribute__((swift_name("doCopy(text:type:accessibility:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronAccessibility *accessibility __attribute__((swift_name("accessibility")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomAccessibilityInfoMessageBody.Companion")))
@interface CybertronRoomAccessibilityInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomAccessibilityInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomCallSummaryInfoMessageBody")))
@interface CybertronRoomCallSummaryInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type status:(NSString * _Nullable)status caller:(CybertronMessageBodyRecipient * _Nullable)caller participants:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)participants __attribute__((swift_name("init(text:type:status:caller:participants:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomCallSummaryInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageBodyRecipient * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<CybertronMessageBodyRecipient *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronRoomCallSummaryInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type status:(NSString * _Nullable)status caller:(CybertronMessageBodyRecipient * _Nullable)caller participants:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)participants __attribute__((swift_name("doCopy(text:type:status:caller:participants:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMessageBodyRecipient * _Nullable caller __attribute__((swift_name("caller")));
@property (readonly) NSArray<CybertronMessageBodyRecipient *> * _Nullable participants __attribute__((swift_name("participants")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomCallSummaryInfoMessageBody.Companion")))
@interface CybertronRoomCallSummaryInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomCallSummaryInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomColorInfoMessageBody")))
@interface CybertronRoomColorInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type color:(NSString * _Nullable)color __attribute__((swift_name("init(text:type:color:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomColorInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomColorInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(text:type:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomColorInfoMessageBody.Companion")))
@interface CybertronRoomColorInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomColorInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomCreatedInfoMessageBody")))
@interface CybertronRoomCreatedInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type title:(NSString * _Nullable)title invited:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)invited added:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)added __attribute__((swift_name("init(text:type:title:invited:added:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomCreatedInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<CybertronMessageBodyRecipient *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<CybertronMessageBodyRecipient *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronRoomCreatedInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type title:(NSString * _Nullable)title invited:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)invited added:(NSArray<CybertronMessageBodyRecipient *> * _Nullable)added __attribute__((swift_name("doCopy(text:type:title:invited:added:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CybertronMessageBodyRecipient *> * _Nullable added __attribute__((swift_name("added")));
@property (readonly) NSArray<CybertronMessageBodyRecipient *> * _Nullable invited __attribute__((swift_name("invited")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomCreatedInfoMessageBody.Companion")))
@interface CybertronRoomCreatedInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomCreatedInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomDoorbellInfoMessageBody")))
@interface CybertronRoomDoorbellInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type doorbell:(CybertronBoolean * _Nullable)doorbell __attribute__((swift_name("init(text:type:doorbell:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomDoorbellInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomDoorbellInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type doorbell:(CybertronBoolean * _Nullable)doorbell __attribute__((swift_name("doCopy(text:type:doorbell:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronBoolean * _Nullable doorbell __attribute__((swift_name("doorbell")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomDoorbellInfoMessageBody.Companion")))
@interface CybertronRoomDoorbellInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomDoorbellInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomModeInfoMessageBody")))
@interface CybertronRoomModeInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type mode:(NSString * _Nullable)mode __attribute__((swift_name("init(text:type:mode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomModeInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomModeInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type mode:(NSString * _Nullable)mode __attribute__((swift_name("doCopy(text:type:mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomModeInfoMessageBody.Companion")))
@interface CybertronRoomModeInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomModeInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTagsInfoMessageBody")))
@interface CybertronRoomTagsInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type tags:(NSArray<NSString *> * _Nullable)tags __attribute__((swift_name("init(text:type:tags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomTagsInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomTagsInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type tags:(NSArray<NSString *> * _Nullable)tags __attribute__((swift_name("doCopy(text:type:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTagsInfoMessageBody.Companion")))
@interface CybertronRoomTagsInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomTagsInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTitleInfoMessageBody")))
@interface CybertronRoomTitleInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type title:(NSString * _Nullable)title __attribute__((swift_name("init(text:type:title:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomTitleInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomTitleInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(text:type:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTitleInfoMessageBody.Companion")))
@interface CybertronRoomTitleInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomTitleInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTopicInfoMessageBody")))
@interface CybertronRoomTopicInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type topic:(NSString * _Nullable)topic __attribute__((swift_name("init(text:type:topic:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomTopicInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomTopicInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type topic:(NSString * _Nullable)topic __attribute__((swift_name("doCopy(text:type:topic:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable topic __attribute__((swift_name("topic")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomTopicInfoMessageBody.Companion")))
@interface CybertronRoomTopicInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomTopicInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomVisibilityInfoMessageBody")))
@interface CybertronRoomVisibilityInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type visibility:(CybertronVisibility *)visibility __attribute__((swift_name("init(text:type:visibility:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronRoomVisibilityInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronVisibility *)component3 __attribute__((swift_name("component3()")));
- (CybertronRoomVisibilityInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type visibility:(CybertronVisibility *)visibility __attribute__((swift_name("doCopy(text:type:visibility:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) CybertronVisibility *visibility __attribute__((swift_name("visibility")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomVisibilityInfoMessageBody.Companion")))
@interface CybertronRoomVisibilityInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomVisibilityInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyAlbum")))
@interface CybertronSpotifyAlbum : CybertronBase
- (instancetype)initWithName:(NSString * _Nullable)name artist:(NSString * _Nullable)artist uri:(NSString * _Nullable)uri images:(NSArray<CybertronImage *> * _Nullable)images trackCount:(CybertronInt * _Nullable)trackCount __attribute__((swift_name("init(name:artist:uri:images:trackCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSpotifyAlbumCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<CybertronImage *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronSpotifyAlbum *)doCopyName:(NSString * _Nullable)name artist:(NSString * _Nullable)artist uri:(NSString * _Nullable)uri images:(NSArray<CybertronImage *> * _Nullable)images trackCount:(CybertronInt * _Nullable)trackCount __attribute__((swift_name("doCopy(name:artist:uri:images:trackCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable artist __attribute__((swift_name("artist")));
@property (readonly) NSArray<CybertronImage *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CybertronInt * _Nullable trackCount __attribute__((swift_name("trackCount")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyAlbum.Companion")))
@interface CybertronSpotifyAlbumCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyAlbumCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyAlbumInfoMessageBody")))
@interface CybertronSpotifyAlbumInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl track:(CybertronSpotifyAlbum * _Nullable)track __attribute__((swift_name("init(text:type:url:originalUrl:track:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronSpotifyAlbumInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronSpotifyAlbum * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronSpotifyAlbumInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl track:(CybertronSpotifyAlbum * _Nullable)track __attribute__((swift_name("doCopy(text:type:url:originalUrl:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronSpotifyAlbum * _Nullable track __attribute__((swift_name("track")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyAlbumInfoMessageBody.Companion")))
@interface CybertronSpotifyAlbumInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyAlbumInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyPlaylist")))
@interface CybertronSpotifyPlaylist : CybertronBase
- (instancetype)initWithUri:(NSString * _Nullable)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSpotifyPlaylistCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronSpotifyPlaylist *)doCopyUri:(NSString * _Nullable)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyPlaylist.Companion")))
@interface CybertronSpotifyPlaylistCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyPlaylistCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyPlaylistInfoMessageBody")))
@interface CybertronSpotifyPlaylistInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl playlist:(CybertronSpotifyPlaylist * _Nullable)playlist __attribute__((swift_name("init(text:type:url:originalUrl:playlist:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronSpotifyPlaylistInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronSpotifyPlaylist * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronSpotifyPlaylistInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl playlist:(CybertronSpotifyPlaylist * _Nullable)playlist __attribute__((swift_name("doCopy(text:type:url:originalUrl:playlist:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) CybertronSpotifyPlaylist * _Nullable playlist __attribute__((swift_name("playlist")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyPlaylistInfoMessageBody.Companion")))
@interface CybertronSpotifyPlaylistInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyPlaylistInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyTrack")))
@interface CybertronSpotifyTrack : CybertronBase
- (instancetype)initWithArtist:(NSString * _Nullable)artist name:(NSString * _Nullable)name preview:(NSString * _Nullable)preview uri:(NSString * _Nullable)uri duration:(CybertronInt * _Nullable)duration album:(CybertronSpotifyAlbum * _Nullable)album __attribute__((swift_name("init(artist:name:preview:uri:duration:album:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSpotifyTrackCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronSpotifyAlbum * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronSpotifyTrack *)doCopyArtist:(NSString * _Nullable)artist name:(NSString * _Nullable)name preview:(NSString * _Nullable)preview uri:(NSString * _Nullable)uri duration:(CybertronInt * _Nullable)duration album:(CybertronSpotifyAlbum * _Nullable)album __attribute__((swift_name("doCopy(artist:name:preview:uri:duration:album:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronSpotifyAlbum * _Nullable album __attribute__((swift_name("album")));
@property (readonly) NSString * _Nullable artist __attribute__((swift_name("artist")));
@property (readonly) CybertronInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable preview __attribute__((swift_name("preview")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyTrack.Companion")))
@interface CybertronSpotifyTrackCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyTrackCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyTrackInfoMessageBody")))
@interface CybertronSpotifyTrackInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl track:(CybertronSpotifyTrack * _Nullable)track __attribute__((swift_name("init(text:type:url:originalUrl:track:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronSpotifyTrackInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronSpotifyTrack * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronSpotifyTrackInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type url:(NSString * _Nullable)url originalUrl:(NSString * _Nullable)originalUrl track:(CybertronSpotifyTrack * _Nullable)track __attribute__((swift_name("doCopy(text:type:url:originalUrl:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronSpotifyTrack * _Nullable track __attribute__((swift_name("track")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotifyTrackInfoMessageBody.Companion")))
@interface CybertronSpotifyTrackInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSpotifyTrackInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummonInfoMessageBody")))
@interface CybertronSummonInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type level:(NSString * _Nullable)level __attribute__((swift_name("init(text:type:level:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronSummonInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronSummonInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type level:(NSString * _Nullable)level __attribute__((swift_name("doCopy(text:type:level:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable level __attribute__((swift_name("level")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummonInfoMessageBody.Companion")))
@interface CybertronSummonInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSummonInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserBody")))
@interface CybertronUserBody : CybertronBase
- (instancetype)initWithVideo:(CybertronMessageBodyVideo * _Nullable)video __attribute__((swift_name("init(video:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronUserBodyCompanion *companion __attribute__((swift_name("companion")));
- (CybertronMessageBodyVideo * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronUserBody *)doCopyVideo:(CybertronMessageBodyVideo * _Nullable)video __attribute__((swift_name("doCopy(video:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMessageBodyVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserBody.Companion")))
@interface CybertronUserBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfoMessageBody")))
@interface CybertronUserInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type user:(CybertronUser * _Nullable)user lastLeftAt:(NSString * _Nullable)lastLeftAt lastSeenAt:(NSString * _Nullable)lastSeenAt __attribute__((swift_name("init(text:type:user:lastLeftAt:lastSeenAt:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronUserInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronUser * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronUserInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type user:(CybertronUser * _Nullable)user lastLeftAt:(NSString * _Nullable)lastLeftAt lastSeenAt:(NSString * _Nullable)lastSeenAt __attribute__((swift_name("doCopy(text:type:user:lastLeftAt:lastSeenAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable lastLeftAt __attribute__((swift_name("lastLeftAt")));
@property (readonly) NSString * _Nullable lastSeenAt __attribute__((swift_name("lastSeenAt")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) CybertronUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfoMessageBody.Companion")))
@interface CybertronUserInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentDeleteInfoMessageBody")))
@interface CybertronUserPresentDeleteInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type id:(NSString * _Nullable)id room:(NSString * _Nullable)room user:(NSString * _Nullable)user createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt reactions:(NSArray<CybertronReaction *> * _Nullable)reactions body:(CybertronUserBody * _Nullable)body __attribute__((swift_name("init(text:type:id:room:user:createdAt:updatedAt:reactions:body:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronUserPresentDeleteInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<CybertronReaction *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronUserBody * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronUserPresentDeleteInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type id:(NSString * _Nullable)id room:(NSString * _Nullable)room user:(NSString * _Nullable)user createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt reactions:(NSArray<CybertronReaction *> * _Nullable)reactions body:(CybertronUserBody * _Nullable)body __attribute__((swift_name("doCopy(text:type:id:room:user:createdAt:updatedAt:reactions:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronUserBody * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<CybertronReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) NSString * _Nullable room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentDeleteInfoMessageBody.Companion")))
@interface CybertronUserPresentDeleteInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserPresentDeleteInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentInfoMessageBody")))
@interface CybertronUserPresentInfoMessageBody : CybertronMessageBodyInfoMessageBody
- (instancetype)initWithText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type id:(NSString * _Nullable)id media:(CybertronMessage * _Nullable)media mediaType:(CybertronUserPresentInfoMessageBodyMediaType *)mediaType __attribute__((swift_name("init(text:type:id:media:mediaType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronUserPresentInfoMessageBodyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronInfoMessageType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMessage * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronUserPresentInfoMessageBodyMediaType *)component5 __attribute__((swift_name("component5()")));
- (CybertronUserPresentInfoMessageBody *)doCopyText:(NSString * _Nullable)text type:(CybertronInfoMessageType * _Nullable)type id:(NSString * _Nullable)id media:(CybertronMessage * _Nullable)media mediaType:(CybertronUserPresentInfoMessageBodyMediaType *)mediaType __attribute__((swift_name("doCopy(text:type:id:media:mediaType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CybertronMessage * _Nullable media __attribute__((swift_name("media")));
@property (readonly) CybertronUserPresentInfoMessageBodyMediaType *mediaType __attribute__((swift_name("mediaType")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) CybertronInfoMessageType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentInfoMessageBody.Companion")))
@interface CybertronUserPresentInfoMessageBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserPresentInfoMessageBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentInfoMessageBody.MediaType")))
@interface CybertronUserPresentInfoMessageBodyMediaType : CybertronKotlinEnum<CybertronUserPresentInfoMessageBodyMediaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronUserPresentInfoMessageBodyMediaType *message __attribute__((swift_name("message")));
@property (class, readonly) CybertronUserPresentInfoMessageBodyMediaType *media __attribute__((swift_name("media")));
@property (class, readonly) CybertronUserPresentInfoMessageBodyMediaType *playlist __attribute__((swift_name("playlist")));
+ (CybertronKotlinArray<CybertronUserPresentInfoMessageBodyMediaType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokenBody")))
@interface CybertronAuthTokenBody : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronAuthTokenBodyCompanion *companion __attribute__((swift_name("companion")));
@property int64_t exp __attribute__((swift_name("exp")));
@property int64_t iat __attribute__((swift_name("iat")));
@property NSString * _Nullable iss __attribute__((swift_name("iss")));
@property NSString * _Nullable operation __attribute__((swift_name("operation")));
@property NSString * _Nullable sub __attribute__((swift_name("sub")));
@property CybertronKotlinArray<NSString *> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthTokenBody.Companion")))
@interface CybertronAuthTokenBodyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAuthTokenBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("PublishError")))
@interface CybertronPublishError : CybertronBase
- (instancetype)initWithThrowable:(CybertronKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishError.NoPermissions")))
@interface CybertronPublishErrorNoPermissions : CybertronPublishError
- (instancetype)initWithThrowable:(CybertronKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishError.TooManyRequests")))
@interface CybertronPublishErrorTooManyRequests : CybertronPublishError
- (instancetype)initWithThrowable:(CybertronKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishError.Unauthorized")))
@interface CybertronPublishErrorUnauthorized : CybertronPublishError
- (instancetype)initWithThrowable:(CybertronKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishError.Unknown")))
@interface CybertronPublishErrorUnknown : CybertronPublishError
- (instancetype)initWithThrowable:(CybertronKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishState")))
@interface CybertronPublishState : CybertronBase
- (instancetype)initWithRoomId:(NSString *)roomId publishState:(CybertronPublishStateState *)publishState publishAudio:(BOOL)publishAudio publishVideo:(BOOL)publishVideo allowTracing:(BOOL)allowTracing error:(CybertronPublishError * _Nullable)error __attribute__((swift_name("init(roomId:publishState:publishAudio:publishVideo:allowTracing:error:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronPublishStateState *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (CybertronPublishError * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronPublishState *)doCopyRoomId:(NSString *)roomId publishState:(CybertronPublishStateState *)publishState publishAudio:(BOOL)publishAudio publishVideo:(BOOL)publishVideo allowTracing:(BOOL)allowTracing error:(CybertronPublishError * _Nullable)error __attribute__((swift_name("doCopy(roomId:publishState:publishAudio:publishVideo:allowTracing:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowTracing __attribute__((swift_name("allowTracing")));
@property (readonly) CybertronPublishError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL publishAudio __attribute__((swift_name("publishAudio")));
@property (readonly) CybertronPublishStateState *publishState __attribute__((swift_name("publishState")));
@property (readonly) BOOL publishVideo __attribute__((swift_name("publishVideo")));
@property (readonly) NSString *roomId __attribute__((swift_name("roomId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishState.State")))
@interface CybertronPublishStateState : CybertronKotlinEnum<CybertronPublishStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronPublishStateState *inProgress __attribute__((swift_name("inProgress")));
@property (class, readonly) CybertronPublishStateState *ready __attribute__((swift_name("ready")));
@property (class, readonly) CybertronPublishStateState *publishing __attribute__((swift_name("publishing")));
@property (class, readonly) CybertronPublishStateState *stopping __attribute__((swift_name("stopping")));
@property (class, readonly) CybertronPublishStateState *error __attribute__((swift_name("error")));
@property (class, readonly) CybertronPublishStateState *accessDenied __attribute__((swift_name("accessDenied")));
+ (CybertronKotlinArray<CybertronPublishStateState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamSubscription")))
@interface CybertronStreamSubscription<T> : CybertronBase
- (instancetype)initWithStream:(T _Nullable)stream subscribeStreamSpec:(CybertronSubscribeStreamSpec *)subscribeStreamSpec flagged:(BOOL)flagged __attribute__((swift_name("init(stream:subscribeStreamSpec:flagged:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronSubscribeStreamSpec *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (CybertronStreamSubscription<T> *)doCopyStream:(T _Nullable)stream subscribeStreamSpec:(CybertronSubscribeStreamSpec *)subscribeStreamSpec flagged:(BOOL)flagged __attribute__((swift_name("doCopy(stream:subscribeStreamSpec:flagged:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL flagged __attribute__((swift_name("flagged")));
@property (readonly) T _Nullable stream __attribute__((swift_name("stream")));
@property (readonly) CybertronSubscribeStreamSpec *subscribeStreamSpec __attribute__((swift_name("subscribeStreamSpec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamSubscriptionAuth")))
@interface CybertronStreamSubscriptionAuth : CybertronBase
- (instancetype)initWithAuthToken:(NSString *)authToken expiration:(int64_t)expiration tags:(CybertronKotlinArray<NSString *> *)tags __attribute__((swift_name("init(authToken:expiration:tags:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (CybertronStreamSubscriptionAuth *)doCopyAuthToken:(NSString *)authToken expiration:(int64_t)expiration tags:(CybertronKotlinArray<NSString *> *)tags __attribute__((swift_name("doCopy(authToken:expiration:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) int64_t expiration __attribute__((swift_name("expiration")));
@property (readonly) CybertronKotlinArray<NSString *> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeStreamSpec")))
@interface CybertronSubscribeStreamSpec : CybertronBase
- (instancetype)initWithTag:(NSString *)tag publisherId:(NSString *)publisherId streamUrl:(NSString *)streamUrl source:(NSString *)source tracingEnabled:(BOOL)tracingEnabled rtcLoggingEnabled:(BOOL)rtcLoggingEnabled startTime:(int64_t)startTime __attribute__((swift_name("init(tag:publisherId:streamUrl:source:tracingEnabled:rtcLoggingEnabled:startTime:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *publisherId __attribute__((swift_name("publisherId")));
@property (readonly) BOOL rtcLoggingEnabled __attribute__((swift_name("rtcLoggingEnabled")));
@property (readonly) NSString *source __attribute__((swift_name("source")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString *streamUrl __attribute__((swift_name("streamUrl")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) BOOL tracingEnabled __attribute__((swift_name("tracingEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AirtimeMedia")))
@interface CybertronAirtimeMedia : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)muteStreamAudioPublisherId:(NSString *)publisherId __attribute__((swift_name("muteStreamAudio(publisherId:)")));
- (void)muteStreamVideoPublisherId:(NSString *)publisherId __attribute__((swift_name("muteStreamVideo(publisherId:)")));
- (void)observeStreamsRoomId:(NSString *)roomId __attribute__((swift_name("observeStreams(roomId:)")));
- (void)publishRoomId:(NSString *)roomId publishAudio:(BOOL)publishAudio publishVideo:(BOOL)publishVideo __attribute__((swift_name("publish(roomId:publishAudio:publishVideo:)")));
- (void)setConserveDataModeEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setConserveDataModeEnabled(enabled:)")));
- (void)setSuperAvatar __attribute__((swift_name("setSuperAvatar()")));
- (void)stopObservingStreamsRoomId:(NSString *)roomId __attribute__((swift_name("stopObservingStreams(roomId:)")));
- (void)unPublishRoomId:(NSString *)roomId __attribute__((swift_name("unPublish(roomId:)")));
- (void)unmuteStreamAudioPublisherId:(NSString *)publisherId __attribute__((swift_name("unmuteStreamAudio(publisherId:)")));
- (void)unmuteStreamVideoPublisherId:(NSString *)publisherId __attribute__((swift_name("unmuteStreamVideo(publisherId:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> audioDeviceChangedFlow __attribute__((swift_name("audioDeviceChangedFlow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioDeviceChangedEvent")))
@interface CybertronAudioDeviceChangedEvent : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("PrimusStream")))
@interface CybertronPrimusStream : CybertronBase
- (instancetype)initWithUser:(CybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> isAudioMuted __attribute__((swift_name("isAudioMuted")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> isVideoMuted __attribute__((swift_name("isVideoMuted")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> isVoiceActive __attribute__((swift_name("isVoiceActive")));
@property (readonly) CybertronUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusPublishStream")))
@interface CybertronPrimusPublishStream : CybertronPrimusStream
- (instancetype)initWithUser:(CybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusSubscriptionStream")))
@interface CybertronPrimusSubscriptionStream : CybertronPrimusStream
- (instancetype)initWithUser:(CybertronUser *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition")))
@interface CybertronCondition : CybertronBase
- (instancetype)initWithKey:(NSString * _Nullable)key bucket:(NSString * _Nullable)bucket acl:(NSString * _Nullable)acl contentType:(NSArray<NSString *> * _Nullable)contentType contentLengthRange:(NSArray<CybertronContentLengthRange *> * _Nullable)contentLengthRange __attribute__((swift_name("init(key:bucket:acl:contentType:contentLengthRange:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronConditionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<CybertronContentLengthRange *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronCondition *)doCopyKey:(NSString * _Nullable)key bucket:(NSString * _Nullable)bucket acl:(NSString * _Nullable)acl contentType:(NSArray<NSString *> * _Nullable)contentType contentLengthRange:(NSArray<CybertronContentLengthRange *> * _Nullable)contentLengthRange __attribute__((swift_name("doCopy(key:bucket:acl:contentType:contentLengthRange:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable acl __attribute__((swift_name("acl")));
@property (readonly) NSString * _Nullable bucket __attribute__((swift_name("bucket")));
@property (readonly) NSArray<CybertronContentLengthRange *> * _Nullable contentLengthRange __attribute__((swift_name("contentLengthRange")));
@property (readonly) NSArray<NSString *> * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition.Companion")))
@interface CybertronConditionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentLengthRange")))
@interface CybertronContentLengthRange : CybertronBase
- (instancetype)initWithContentLengthRange:(NSString *)contentLengthRange lowerBound:(int64_t)lowerBound upperBound:(int64_t)upperBound __attribute__((swift_name("init(contentLengthRange:lowerBound:upperBound:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronContentLengthRangeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (CybertronContentLengthRange *)doCopyContentLengthRange:(NSString *)contentLengthRange lowerBound:(int64_t)lowerBound upperBound:(int64_t)upperBound __attribute__((swift_name("doCopy(contentLengthRange:lowerBound:upperBound:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *contentLengthRange __attribute__((swift_name("contentLengthRange")));
@property (readonly) int64_t lowerBound __attribute__((swift_name("lowerBound")));
@property (readonly) int64_t upperBound __attribute__((swift_name("upperBound")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentLengthRange.Companion")))
@interface CybertronContentLengthRangeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronContentLengthRangeCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlainPolicy")))
@interface CybertronPlainPolicy : CybertronBase
- (instancetype)initWithExpiration:(NSString * _Nullable)expiration conditions:(CybertronCondition * _Nullable)conditions __attribute__((swift_name("init(expiration:conditions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPlainPolicyCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronCondition * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronPlainPolicy *)doCopyExpiration:(NSString * _Nullable)expiration conditions:(CybertronCondition * _Nullable)conditions __attribute__((swift_name("doCopy(expiration:conditions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronCondition * _Nullable conditions __attribute__((swift_name("conditions")));
@property (readonly) NSString * _Nullable expiration __attribute__((swift_name("expiration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlainPolicy.Companion")))
@interface CybertronPlainPolicyCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPlainPolicyCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenResponse")))
@interface CybertronTokenResponse : CybertronBase
- (instancetype)initWithPlainPolicy:(CybertronPlainPolicy * _Nullable)plainPolicy policy:(NSString * _Nullable)policy awsKey:(NSString * _Nullable)awsKey signature:(NSString * _Nullable)signature fileName:(NSString * _Nullable)fileName maxUploadSize:(CybertronLong * _Nullable)maxUploadSize __attribute__((swift_name("init(plainPolicy:policy:awsKey:signature:fileName:maxUploadSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronTokenResponseCompanion *companion __attribute__((swift_name("companion")));
- (CybertronPlainPolicy * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronLong * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronTokenResponse *)doCopyPlainPolicy:(CybertronPlainPolicy * _Nullable)plainPolicy policy:(NSString * _Nullable)policy awsKey:(NSString * _Nullable)awsKey signature:(NSString * _Nullable)signature fileName:(NSString * _Nullable)fileName maxUploadSize:(CybertronLong * _Nullable)maxUploadSize __attribute__((swift_name("doCopy(plainPolicy:policy:awsKey:signature:fileName:maxUploadSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable awsKey __attribute__((swift_name("awsKey")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) CybertronLong * _Nullable maxUploadSize __attribute__((swift_name("maxUploadSize")));
@property (readonly) CybertronPlainPolicy * _Nullable plainPolicy __attribute__((swift_name("plainPolicy")));
@property (readonly) NSString * _Nullable policy __attribute__((swift_name("policy")));
@property (readonly) NSString * _Nullable signature __attribute__((swift_name("signature")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenResponse.Companion")))
@interface CybertronTokenResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadToken")))
@interface CybertronUploadToken : CybertronBase
- (instancetype)initWithMimeType:(NSString *)mimeType fileName:(NSString *)fileName __attribute__((swift_name("init(mimeType:fileName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronUploadTokenCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronUploadToken *)doCopyMimeType:(NSString *)mimeType fileName:(NSString *)fileName __attribute__((swift_name("doCopy(mimeType:fileName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *mimeType __attribute__((swift_name("mimeType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadToken.Companion")))
@interface CybertronUploadTokenCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUploadTokenCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Accessibility_")))
@interface CybertronAccessibility_ : CybertronKotlinEnum<CybertronAccessibility_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronAccessibility_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronAccessibility_ *inviteOnly __attribute__((swift_name("inviteOnly")));
@property (class, readonly) CybertronAccessibility_ *request __attribute__((swift_name("request")));
@property (class, readonly) CybertronAccessibility_ *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) CybertronAccessibility_ *open __attribute__((swift_name("open")));
+ (CybertronKotlinArray<CybertronAccessibility_ *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Accessibility_.Companion")))
@interface CybertronAccessibility_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAccessibility_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState_")))
@interface CybertronPermissionState_ : CybertronKotlinEnum<CybertronPermissionState_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPermissionState_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronPermissionState_ *everyone __attribute__((swift_name("everyone")));
@property (class, readonly) CybertronPermissionState_ *members __attribute__((swift_name("members")));
@property (class, readonly) CybertronPermissionState_ *moderators __attribute__((swift_name("moderators")));
@property (class, readonly) CybertronPermissionState_ *admins __attribute__((swift_name("admins")));
@property (class, readonly) CybertronPermissionState_ *creator __attribute__((swift_name("creator")));
@property (class, readonly) CybertronPermissionState_ *globalModerators __attribute__((swift_name("globalModerators")));
+ (CybertronKotlinArray<CybertronPermissionState_ *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState_.Companion")))
@interface CybertronPermissionState_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPermissionState_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions_")))
@interface CybertronPermissions_ : CybertronBase
- (instancetype)initWithEditRoomProperties:(CybertronPermissionState_ *)editRoomProperties controlStage:(CybertronPermissionState_ *)controlStage changeMembership:(CybertronPermissionState_ *)changeMembership clearHistory:(CybertronPermissionState_ *)clearHistory seekMedia:(CybertronPermissionState_ *)seekMedia postMessage:(CybertronPermissionState_ *)postMessage postMedia:(CybertronPermissionState_ *)postMedia postLink:(CybertronPermissionState_ *)postLink uploadLocalMedia:(CybertronPermissionState_ *)uploadLocalMedia sendInvite:(CybertronPermissionState_ *)sendInvite sendReactions:(CybertronPermissionState_ *)sendReactions goLiveVideoWithoutRequest:(CybertronPermissionState_ *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(CybertronPermissionState_ *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(CybertronPermissionState_ *)roomRequestApproveGoLive inviteGoLiveAudio:(CybertronPermissionState_ *)inviteGoLiveAudio inviteGoLiveVideo:(CybertronPermissionState_ *)inviteGoLiveVideo deleteRoom:(CybertronPermissionState_ *)deleteRoom __attribute__((swift_name("init(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPermissions_Companion *companion __attribute__((swift_name("companion")));
- (CybertronPermissionState_ *)component1 __attribute__((swift_name("component1()")));
- (CybertronPermissionState_ *)component10 __attribute__((swift_name("component10()")));
- (CybertronPermissionState_ *)component11 __attribute__((swift_name("component11()")));
- (CybertronPermissionState_ *)component12 __attribute__((swift_name("component12()")));
- (CybertronPermissionState_ *)component13 __attribute__((swift_name("component13()")));
- (CybertronPermissionState_ *)component14 __attribute__((swift_name("component14()")));
- (CybertronPermissionState_ *)component15 __attribute__((swift_name("component15()")));
- (CybertronPermissionState_ *)component16 __attribute__((swift_name("component16()")));
- (CybertronPermissionState_ *)component17 __attribute__((swift_name("component17()")));
- (CybertronPermissionState_ *)component2 __attribute__((swift_name("component2()")));
- (CybertronPermissionState_ *)component3 __attribute__((swift_name("component3()")));
- (CybertronPermissionState_ *)component4 __attribute__((swift_name("component4()")));
- (CybertronPermissionState_ *)component5 __attribute__((swift_name("component5()")));
- (CybertronPermissionState_ *)component6 __attribute__((swift_name("component6()")));
- (CybertronPermissionState_ *)component7 __attribute__((swift_name("component7()")));
- (CybertronPermissionState_ *)component8 __attribute__((swift_name("component8()")));
- (CybertronPermissionState_ *)component9 __attribute__((swift_name("component9()")));
- (CybertronPermissions_ *)doCopyEditRoomProperties:(CybertronPermissionState_ *)editRoomProperties controlStage:(CybertronPermissionState_ *)controlStage changeMembership:(CybertronPermissionState_ *)changeMembership clearHistory:(CybertronPermissionState_ *)clearHistory seekMedia:(CybertronPermissionState_ *)seekMedia postMessage:(CybertronPermissionState_ *)postMessage postMedia:(CybertronPermissionState_ *)postMedia postLink:(CybertronPermissionState_ *)postLink uploadLocalMedia:(CybertronPermissionState_ *)uploadLocalMedia sendInvite:(CybertronPermissionState_ *)sendInvite sendReactions:(CybertronPermissionState_ *)sendReactions goLiveVideoWithoutRequest:(CybertronPermissionState_ *)goLiveVideoWithoutRequest goLiveAudioWithoutRequest:(CybertronPermissionState_ *)goLiveAudioWithoutRequest roomRequestApproveGoLive:(CybertronPermissionState_ *)roomRequestApproveGoLive inviteGoLiveAudio:(CybertronPermissionState_ *)inviteGoLiveAudio inviteGoLiveVideo:(CybertronPermissionState_ *)inviteGoLiveVideo deleteRoom:(CybertronPermissionState_ *)deleteRoom __attribute__((swift_name("doCopy(editRoomProperties:controlStage:changeMembership:clearHistory:seekMedia:postMessage:postMedia:postLink:uploadLocalMedia:sendInvite:sendReactions:goLiveVideoWithoutRequest:goLiveAudioWithoutRequest:roomRequestApproveGoLive:inviteGoLiveAudio:inviteGoLiveVideo:deleteRoom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronPermissionState_ *changeMembership __attribute__((swift_name("changeMembership")));
@property (readonly) CybertronPermissionState_ *clearHistory __attribute__((swift_name("clearHistory")));
@property (readonly) CybertronPermissionState_ *controlStage __attribute__((swift_name("controlStage")));
@property (readonly) CybertronPermissionState_ *deleteRoom __attribute__((swift_name("deleteRoom")));
@property (readonly) CybertronPermissionState_ *editRoomProperties __attribute__((swift_name("editRoomProperties")));
@property (readonly) CybertronPermissionState_ *goLiveAudioWithoutRequest __attribute__((swift_name("goLiveAudioWithoutRequest")));
@property (readonly) CybertronPermissionState_ *goLiveVideoWithoutRequest __attribute__((swift_name("goLiveVideoWithoutRequest")));
@property (readonly) CybertronPermissionState_ *inviteGoLiveAudio __attribute__((swift_name("inviteGoLiveAudio")));
@property (readonly) CybertronPermissionState_ *inviteGoLiveVideo __attribute__((swift_name("inviteGoLiveVideo")));
@property (readonly) CybertronPermissionState_ *postLink __attribute__((swift_name("postLink")));
@property (readonly) CybertronPermissionState_ *postMedia __attribute__((swift_name("postMedia")));
@property (readonly) CybertronPermissionState_ *postMessage __attribute__((swift_name("postMessage")));
@property (readonly) CybertronPermissionState_ *roomRequestApproveGoLive __attribute__((swift_name("roomRequestApproveGoLive")));
@property (readonly) CybertronPermissionState_ *seekMedia __attribute__((swift_name("seekMedia")));
@property (readonly) CybertronPermissionState_ *sendInvite __attribute__((swift_name("sendInvite")));
@property (readonly) CybertronPermissionState_ *sendReactions __attribute__((swift_name("sendReactions")));
@property (readonly) CybertronPermissionState_ *uploadLocalMedia __attribute__((swift_name("uploadLocalMedia")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permissions_.Companion")))
@interface CybertronPermissions_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPermissions_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence__")))
@interface CybertronPresence__ : CybertronBase
- (instancetype)initWithUser:(NSString * _Nullable)user room:(NSString * _Nullable)room state:(CybertronPresenceActivity_ * _Nullable)state validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("init(user:room:state:validUntil:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPresence__Companion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronPresenceActivity_ * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresence__ *)doCopyUser:(NSString * _Nullable)user room:(NSString * _Nullable)room state:(CybertronPresenceActivity_ * _Nullable)state validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("doCopy(user:room:state:validUntil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable room __attribute__((swift_name("room")));
@property (readonly) CybertronPresenceActivity_ * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable validUntil __attribute__((swift_name("validUntil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence__.Companion")))
@interface CybertronPresence__Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresence__Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceActivity_")))
@interface CybertronPresenceActivity_ : CybertronKotlinEnum<CybertronPresenceActivity_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPresenceActivity_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronPresenceActivity_ *gone __attribute__((swift_name("gone")));
@property (class, readonly) CybertronPresenceActivity_ *none __attribute__((swift_name("none")));
@property (class, readonly) CybertronPresenceActivity_ *typing __attribute__((swift_name("typing")));
@property (class, readonly) CybertronPresenceActivity_ *picture __attribute__((swift_name("picture")));
@property (class, readonly) CybertronPresenceActivity_ *location __attribute__((swift_name("location")));
@property (class, readonly) CybertronPresenceActivity_ *other __attribute__((swift_name("other")));
+ (CybertronKotlinArray<CybertronPresenceActivity_ *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t timeout __attribute__((swift_name("timeout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceActivity_.Companion")))
@interface CybertronPresenceActivity_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPresenceActivity_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State_")))
@interface CybertronState_ : CybertronKotlinEnum<CybertronState_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronState_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronState_ *active __attribute__((swift_name("active")));
@property (class, readonly) CybertronState_ *pending __attribute__((swift_name("pending")));
@property (class, readonly) CybertronState_ *visiting __attribute__((swift_name("visiting")));
@property (class, readonly) CybertronState_ *requested __attribute__((swift_name("requested")));
@property (class, readonly) CybertronState_ *spectator __attribute__((swift_name("spectator")));
@property (class, readonly) CybertronState_ *lurker __attribute__((swift_name("lurker")));
@property (class, readonly) CybertronState_ *left __attribute__((swift_name("left")));
@property (class, readonly) CybertronState_ *kicked __attribute__((swift_name("kicked")));
@property (class, readonly) CybertronState_ *denied __attribute__((swift_name("denied")));
@property (class, readonly) CybertronState_ *ignored __attribute__((swift_name("ignored")));
@property (class, readonly) CybertronState_ *none __attribute__((swift_name("none")));
+ (CybertronKotlinArray<CybertronState_ *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State_.Companion")))
@interface CybertronState_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronState_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visibility_")))
@interface CybertronVisibility_ : CybertronKotlinEnum<CybertronVisibility_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronVisibility_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronVisibility_ *secret __attribute__((swift_name("secret")));
@property (class, readonly) CybertronVisibility_ *friends __attribute__((swift_name("friends")));
@property (class, readonly) CybertronVisibility_ *friendsOfFriends __attribute__((swift_name("friendsOfFriends")));
@property (class, readonly) CybertronVisibility_ *mutualBasic __attribute__((swift_name("mutualBasic")));
@property (class, readonly) CybertronVisibility_ *everyone __attribute__((swift_name("everyone")));
+ (CybertronKotlinArray<CybertronVisibility_ *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visibility_.Companion")))
@interface CybertronVisibility_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronVisibility_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthRequest")))
@interface CybertronAuthRequest : CybertronBase
- (instancetype)initWithPhone:(NSString *)phone __attribute__((swift_name("init(phone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronAuthRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronAuthRequest *)doCopyPhone:(NSString *)phone __attribute__((swift_name("doCopy(phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthRequest.Companion")))
@interface CybertronAuthRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAuthRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse")))
@interface CybertronAuthResponse : CybertronBase
- (instancetype)initWithVerified:(BOOL)verified supportsVoiceAuth:(BOOL)supportsVoiceAuth __attribute__((swift_name("init(verified:supportsVoiceAuth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (CybertronAuthResponse *)doCopyVerified:(BOOL)verified supportsVoiceAuth:(BOOL)supportsVoiceAuth __attribute__((swift_name("doCopy(verified:supportsVoiceAuth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL supportsVoiceAuth __attribute__((swift_name("supportsVoiceAuth")));
@property (readonly) BOOL verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse.Companion")))
@interface CybertronAuthResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CybertronKotlinThrowable : CybertronBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CybertronKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CybertronKotlinException : CybertronKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException")))
@interface CybertronDSException : CybertronKotlinException
- (instancetype)initWithCode:(CybertronDSExceptionCode *)code details:(NSString * _Nullable)details debug:(NSArray<CybertronDSExceptionDebug *> * _Nullable)debug errors:(NSArray<CybertronDSExceptionError *> * _Nullable)errors suggestions:(NSArray<NSString *> * _Nullable)suggestions violation:(NSString * _Nullable)violation __attribute__((swift_name("init(code:details:debug:errors:suggestions:violation:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronDSExceptionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronDSExceptionCode *code __attribute__((swift_name("code")));
@property (readonly) NSArray<CybertronDSExceptionDebug *> * _Nullable debug __attribute__((swift_name("debug")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) NSArray<CybertronDSExceptionError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSArray<NSString *> * _Nullable suggestions __attribute__((swift_name("suggestions")));
@property (readonly) NSString * _Nullable violation __attribute__((swift_name("violation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.Code")))
@interface CybertronDSExceptionCode : CybertronKotlinEnum<CybertronDSExceptionCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronDSExceptionCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronDSExceptionCode *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CybertronDSExceptionCode *outdated __attribute__((swift_name("outdated")));
@property (class, readonly) CybertronDSExceptionCode *rateLimited __attribute__((swift_name("rateLimited")));
@property (class, readonly) CybertronDSExceptionCode *invalidPhone __attribute__((swift_name("invalidPhone")));
@property (class, readonly) CybertronDSExceptionCode *invalidVerificationCode __attribute__((swift_name("invalidVerificationCode")));
@property (class, readonly) CybertronDSExceptionCode *duplicateEmail __attribute__((swift_name("duplicateEmail")));
@property (class, readonly) CybertronDSExceptionCode *badInput __attribute__((swift_name("badInput")));
@property (class, readonly) CybertronDSExceptionCode *invalidCredentials __attribute__((swift_name("invalidCredentials")));
@property (class, readonly) CybertronDSExceptionCode *accessTokenExpired __attribute__((swift_name("accessTokenExpired")));
@property (class, readonly) CybertronDSExceptionCode *userNotFound __attribute__((swift_name("userNotFound")));
@property (class, readonly) CybertronDSExceptionCode *roomNotFound __attribute__((swift_name("roomNotFound")));
@property (class, readonly) CybertronDSExceptionCode *sessionNotFound __attribute__((swift_name("sessionNotFound")));
@property (class, readonly) CybertronDSExceptionCode *malformedInput __attribute__((swift_name("malformedInput")));
@property (class, readonly) CybertronDSExceptionCode *kickedFromStreamCoolOff __attribute__((swift_name("kickedFromStreamCoolOff")));
@property (class, readonly) CybertronDSExceptionCode *noPermissions __attribute__((swift_name("noPermissions")));
@property (class, readonly) CybertronDSExceptionCode *notInvited __attribute__((swift_name("notInvited")));
@property (class, readonly) CybertronDSExceptionCode *roomCountMaxed __attribute__((swift_name("roomCountMaxed")));
@property (class, readonly) CybertronDSExceptionCode *roomIsFull __attribute__((swift_name("roomIsFull")));
@property (class, readonly) CybertronDSExceptionCode *suspended __attribute__((swift_name("suspended")));
@property (class, readonly) CybertronDSExceptionCode *unverifiedEmail __attribute__((swift_name("unverifiedEmail")));
@property (class, readonly) CybertronDSExceptionCode *duplicateUsername __attribute__((swift_name("duplicateUsername")));
@property (class, readonly) CybertronDSExceptionCode *profaneLanguage __attribute__((swift_name("profaneLanguage")));
@property (class, readonly) CybertronDSExceptionCode *badLanguage __attribute__((swift_name("badLanguage")));
@property (class, readonly) CybertronDSExceptionCode *badRequest __attribute__((swift_name("badRequest")));
@property (class, readonly) CybertronDSExceptionCode *lastModCantLeave __attribute__((swift_name("lastModCantLeave")));
@property (class, readonly) CybertronDSExceptionCode *invitationRequired __attribute__((swift_name("invitationRequired")));
@property (class, readonly) CybertronDSExceptionCode *notLinkedYet __attribute__((swift_name("notLinkedYet")));
@property (class, readonly) CybertronDSExceptionCode *errorFetchingLiveStream __attribute__((swift_name("errorFetchingLiveStream")));
@property (class, readonly) CybertronDSExceptionCode *userNotPublishing __attribute__((swift_name("userNotPublishing")));
@property (class, readonly) CybertronDSExceptionCode *userNotBroadcasting __attribute__((swift_name("userNotBroadcasting")));
@property (class, readonly) CybertronDSExceptionCode *callNotFound __attribute__((swift_name("callNotFound")));
@property (class, readonly) CybertronDSExceptionCode *kickedCannotJoin __attribute__((swift_name("kickedCannotJoin")));
@property (class, readonly) CybertronDSExceptionCode *oauthException __attribute__((swift_name("oauthException")));
@property (class, readonly) CybertronDSExceptionCode *requestToJoinDenied __attribute__((swift_name("requestToJoinDenied")));
@property (class, readonly) CybertronDSExceptionCode *ageGated __attribute__((swift_name("ageGated")));
@property (class, readonly) CybertronDSExceptionCode *invalidRequest __attribute__((swift_name("invalidRequest")));
@property (class, readonly) CybertronDSExceptionCode *syncNotFound __attribute__((swift_name("syncNotFound")));
@property (class, readonly) CybertronDSExceptionCode *outOfSync __attribute__((swift_name("outOfSync")));
@property (class, readonly) CybertronDSExceptionCode *invalidParameter __attribute__((swift_name("invalidParameter")));
@property (class, readonly) CybertronDSExceptionCode *invalidState __attribute__((swift_name("invalidState")));
@property (class, readonly) CybertronDSExceptionCode *maxScheduledSummonsExceeded __attribute__((swift_name("maxScheduledSummonsExceeded")));
@property (class, readonly) CybertronDSExceptionCode *scheduledSummonNotFound __attribute__((swift_name("scheduledSummonNotFound")));
@property (class, readonly) CybertronDSExceptionCode *scheduledSummonOverlap __attribute__((swift_name("scheduledSummonOverlap")));
@property (class, readonly) CybertronDSExceptionCode *noReceiptFound __attribute__((swift_name("noReceiptFound")));
@property (class, readonly) CybertronDSExceptionCode *duplicateEnrollment __attribute__((swift_name("duplicateEnrollment")));
@property (class, readonly) CybertronDSExceptionCode *roomRequestNotFound __attribute__((swift_name("roomRequestNotFound")));
@property (class, readonly) CybertronDSExceptionCode *reportingClosed __attribute__((swift_name("reportingClosed")));
@property (class, readonly) CybertronDSExceptionCode *mediaAlreadyPresented __attribute__((swift_name("mediaAlreadyPresented")));
@property (class, readonly) CybertronDSExceptionCode *maxFollowingLimit __attribute__((swift_name("maxFollowingLimit")));
@property (class, readonly) CybertronDSExceptionCode *userBannedFromRoom __attribute__((swift_name("userBannedFromRoom")));
@property (class, readonly) CybertronDSExceptionCode *blacklistedName __attribute__((swift_name("blacklistedName")));
@property (class, readonly) CybertronDSExceptionCode *invalidDcDeviceToken __attribute__((swift_name("invalidDcDeviceToken")));
@property (class, readonly) CybertronDSExceptionCode *alreadyInvited __attribute__((swift_name("alreadyInvited")));
@property (class, readonly) CybertronDSExceptionCode *tooManyRequests __attribute__((swift_name("tooManyRequests")));
@property (class, readonly) CybertronDSExceptionCode *notAllowedOnGlobalMod __attribute__((swift_name("notAllowedOnGlobalMod")));
@property (class, readonly) CybertronDSExceptionCode *cannotLeaveRoom __attribute__((swift_name("cannotLeaveRoom")));
@property (class, readonly) CybertronDSExceptionCode *sameUser __attribute__((swift_name("sameUser")));
+ (CybertronKotlinArray<CybertronDSExceptionCode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.CodeCompanion")))
@interface CybertronDSExceptionCodeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronDSExceptionCodeCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.Companion")))
@interface CybertronDSExceptionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronDSExceptionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.Debug")))
@interface CybertronDSExceptionDebug : CybertronBase
- (instancetype)initWithDataPath:(NSString *)dataPath message:(NSString *)message __attribute__((swift_name("init(dataPath:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronDSExceptionDebugCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronDSExceptionDebug *)doCopyDataPath:(NSString *)dataPath message:(NSString *)message __attribute__((swift_name("doCopy(dataPath:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataPath __attribute__((swift_name("dataPath")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.DebugCompanion")))
@interface CybertronDSExceptionDebugCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronDSExceptionDebugCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.Error")))
@interface CybertronDSExceptionError : CybertronBase
- (instancetype)initWithDataPath:(NSString *)dataPath message:(NSString *)message __attribute__((swift_name("init(dataPath:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronDSExceptionErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronDSExceptionError *)doCopyDataPath:(NSString *)dataPath message:(NSString *)message __attribute__((swift_name("doCopy(dataPath:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataPath __attribute__((swift_name("dataPath")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DSException.ErrorCompanion")))
@interface CybertronDSExceptionErrorCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronDSExceptionErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PalpatineAllocation")))
@interface CybertronPalpatineAllocation : CybertronBase
- (instancetype)initWithInstance:(NSString *)instance __attribute__((swift_name("init(instance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPalpatineAllocationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronPalpatineAllocation *)doCopyInstance:(NSString *)instance __attribute__((swift_name("doCopy(instance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *instance __attribute__((swift_name("instance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PalpatineAllocation.Companion")))
@interface CybertronPalpatineAllocationCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPalpatineAllocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyRequest")))
@interface CybertronVerifyRequest : CybertronBase
- (instancetype)initWithCode:(NSString *)code phone:(NSString *)phone __attribute__((swift_name("init(code:phone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronVerifyRequest *)doCopyCode:(NSString *)code phone:(NSString *)phone __attribute__((swift_name("doCopy(code:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyRequest.Companion")))
@interface CybertronVerifyRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyResponse")))
@interface CybertronVerifyResponse : CybertronBase
- (instancetype)initWithToken:(NSString *)token userStatus:(NSString *)userStatus __attribute__((swift_name("init(token:userStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronVerifyResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronVerifyResponse *)doCopyToken:(NSString *)token userStatus:(NSString *)userStatus __attribute__((swift_name("doCopy(token:userStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *userStatus __attribute__((swift_name("userStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyResponse.Companion")))
@interface CybertronVerifyResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronVerifyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionUser_")))
@interface CybertronSessionUser_ : CybertronBase
- (instancetype)initWithId:(NSString *)id phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status createdAt:(NSString * _Nullable)createdAt followState:(NSString * _Nullable)followState referencedFollowState:(NSString * _Nullable)referencedFollowState presence:(NSString * _Nullable)presence cumulativeAcceptedGoLiveRequests:(CybertronInt * _Nullable)cumulativeAcceptedGoLiveRequests __attribute__((swift_name("init(id:phone:email:bio:firstName:lastName:username:verified:certified:avatarUrl:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:createdAt:followState:referencedFollowState:presence:cumulativeAcceptedGoLiveRequests:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSessionUser_Companion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (CybertronLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (CybertronLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSArray<NSString *> *)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (CybertronInt * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronSessionUser_ *)doCopyId:(NSString *)id phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status createdAt:(NSString * _Nullable)createdAt followState:(NSString * _Nullable)followState referencedFollowState:(NSString * _Nullable)referencedFollowState presence:(NSString * _Nullable)presence cumulativeAcceptedGoLiveRequests:(CybertronInt * _Nullable)cumulativeAcceptedGoLiveRequests __attribute__((swift_name("doCopy(id:phone:email:bio:firstName:lastName:username:verified:certified:avatarUrl:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:createdAt:followState:referencedFollowState:presence:cumulativeAcceptedGoLiveRequests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) CybertronBoolean * _Nullable certified __attribute__((swift_name("certified")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) CybertronInt * _Nullable cumulativeAcceptedGoLiveRequests __attribute__((swift_name("cumulativeAcceptedGoLiveRequests")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable followState __attribute__((swift_name("followState")));
@property (readonly) CybertronLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) CybertronLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable presence __attribute__((swift_name("presence")));
@property (readonly) NSString * _Nullable referencedFollowState __attribute__((swift_name("referencedFollowState")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionUser_.Companion")))
@interface CybertronSessionUser_Companion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSessionUser_Companion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfile")))
@interface CybertronUserProfile : CybertronBase
- (instancetype)initWithFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName facebookUserId:(NSString * _Nullable)facebookUserId apnToken:(NSString * _Nullable)apnToken voipToken:(NSString * _Nullable)voipToken gcmToken:(NSString * _Nullable)gcmToken email:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth bio:(NSString * _Nullable)bio phone:(NSString * _Nullable)phone avatarFilename:(NSString * _Nullable)avatarFilename password:(NSString * _Nullable)password oldPassword:(NSString * _Nullable)oldPassword privateProfile:(CybertronBoolean * _Nullable)privateProfile allowFriendsToAutoAddRoom:(CybertronBoolean * _Nullable)allowFriendsToAutoAddRoom twitterUsername:(NSString * _Nullable)twitterUsername instagramUsername:(NSString * _Nullable)instagramUsername __attribute__((swift_name("init(firstName:lastName:facebookUserId:apnToken:voipToken:gcmToken:email:dateOfBirth:bio:phone:avatarFilename:password:oldPassword:privateProfile:allowFriendsToAutoAddRoom:twitterUsername:instagramUsername:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronUserProfileCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (CybertronBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronUserProfile *)doCopyFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName facebookUserId:(NSString * _Nullable)facebookUserId apnToken:(NSString * _Nullable)apnToken voipToken:(NSString * _Nullable)voipToken gcmToken:(NSString * _Nullable)gcmToken email:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth bio:(NSString * _Nullable)bio phone:(NSString * _Nullable)phone avatarFilename:(NSString * _Nullable)avatarFilename password:(NSString * _Nullable)password oldPassword:(NSString * _Nullable)oldPassword privateProfile:(CybertronBoolean * _Nullable)privateProfile allowFriendsToAutoAddRoom:(CybertronBoolean * _Nullable)allowFriendsToAutoAddRoom twitterUsername:(NSString * _Nullable)twitterUsername instagramUsername:(NSString * _Nullable)instagramUsername __attribute__((swift_name("doCopy(firstName:lastName:facebookUserId:apnToken:voipToken:gcmToken:email:dateOfBirth:bio:phone:avatarFilename:password:oldPassword:privateProfile:allowFriendsToAutoAddRoom:twitterUsername:instagramUsername:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronBoolean * _Nullable allowFriendsToAutoAddRoom __attribute__((swift_name("allowFriendsToAutoAddRoom")));
@property (readonly) NSString * _Nullable apnToken __attribute__((swift_name("apnToken")));
@property (readonly) NSString * _Nullable avatarFilename __attribute__((swift_name("avatarFilename")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable facebookUserId __attribute__((swift_name("facebookUserId")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable gcmToken __attribute__((swift_name("gcmToken")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable oldPassword __attribute__((swift_name("oldPassword")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) CybertronBoolean * _Nullable privateProfile __attribute__((swift_name("privateProfile")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable voipToken __attribute__((swift_name("voipToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfile.Companion")))
@interface CybertronUserProfileCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfileObjectUpdater")))
@interface CybertronUserProfileObjectUpdater : CybertronBase
@property (readonly) CybertronBoolean * _Nullable allowFriendsToAutoAddRoom __attribute__((swift_name("allowFriendsToAutoAddRoom")));
@property (readonly) NSString * _Nullable apnToken __attribute__((swift_name("apnToken")));
@property (readonly) NSString * _Nullable avatarFilename __attribute__((swift_name("avatarFilename")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable facebookUserId __attribute__((swift_name("facebookUserId")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable gcmToken __attribute__((swift_name("gcmToken")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable oldPassword __attribute__((swift_name("oldPassword")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) CybertronBoolean * _Nullable privateProfile __attribute__((swift_name("privateProfile")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable voipToken __attribute__((swift_name("voipToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProfileObjectUpdater.Builder")))
@interface CybertronUserProfileObjectUpdaterBuilder : CybertronBase
- (instancetype)initWithFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName facebookUserId:(NSString * _Nullable)facebookUserId apnToken:(NSString * _Nullable)apnToken voipToken:(NSString * _Nullable)voipToken gcmToken:(NSString * _Nullable)gcmToken email:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth bio:(NSString * _Nullable)bio phone:(NSString * _Nullable)phone avatarFilename:(NSString * _Nullable)avatarFilename password:(NSString * _Nullable)password oldPassword:(NSString * _Nullable)oldPassword privateProfile:(CybertronBoolean * _Nullable)privateProfile allowFriendsToAutoAddToRoom:(CybertronBoolean * _Nullable)allowFriendsToAutoAddToRoom twitterUsername:(NSString * _Nullable)twitterUsername instagramUsername:(NSString * _Nullable)instagramUsername __attribute__((swift_name("init(firstName:lastName:facebookUserId:apnToken:voipToken:gcmToken:email:dateOfBirth:bio:phone:avatarFilename:password:oldPassword:privateProfile:allowFriendsToAutoAddToRoom:twitterUsername:instagramUsername:)"))) __attribute__((objc_designated_initializer));
- (CybertronUserProfileObjectUpdaterBuilder *)allowFriendsToAutoAddToRoomAllowFriendsToAutoAddToRoom:(CybertronBoolean * _Nullable)allowFriendsToAutoAddToRoom __attribute__((swift_name("allowFriendsToAutoAddToRoom(allowFriendsToAutoAddToRoom:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)apnTokenApnToken:(NSString * _Nullable)apnToken __attribute__((swift_name("apnToken(apnToken:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)avatarFilenameAvatarFilename:(NSString * _Nullable)avatarFilename __attribute__((swift_name("avatarFilename(avatarFilename:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)bioBio:(NSString * _Nullable)bio __attribute__((swift_name("bio(bio:)")));
- (CybertronUserProfile *)build __attribute__((swift_name("build()")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (CybertronBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronUserProfileObjectUpdaterBuilder *)doCopyFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName facebookUserId:(NSString * _Nullable)facebookUserId apnToken:(NSString * _Nullable)apnToken voipToken:(NSString * _Nullable)voipToken gcmToken:(NSString * _Nullable)gcmToken email:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth bio:(NSString * _Nullable)bio phone:(NSString * _Nullable)phone avatarFilename:(NSString * _Nullable)avatarFilename password:(NSString * _Nullable)password oldPassword:(NSString * _Nullable)oldPassword privateProfile:(CybertronBoolean * _Nullable)privateProfile allowFriendsToAutoAddToRoom:(CybertronBoolean * _Nullable)allowFriendsToAutoAddToRoom twitterUsername:(NSString * _Nullable)twitterUsername instagramUsername:(NSString * _Nullable)instagramUsername __attribute__((swift_name("doCopy(firstName:lastName:facebookUserId:apnToken:voipToken:gcmToken:email:dateOfBirth:bio:phone:avatarFilename:password:oldPassword:privateProfile:allowFriendsToAutoAddToRoom:twitterUsername:instagramUsername:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)dateOfBirthDateOfBirth:(NSString * _Nullable)dateOfBirth __attribute__((swift_name("dateOfBirth(dateOfBirth:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)emailEmail:(NSString * _Nullable)email __attribute__((swift_name("email(email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)facebookUserIdFacebookUserId:(NSString * _Nullable)facebookUserId __attribute__((swift_name("facebookUserId(facebookUserId:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)firstNameFirstName:(NSString * _Nullable)firstName __attribute__((swift_name("firstName(firstName:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)gcmTokenGcmToken:(NSString * _Nullable)gcmToken __attribute__((swift_name("gcmToken(gcmToken:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CybertronUserProfileObjectUpdaterBuilder *)instagramUsernameInstagramUsername:(NSString * _Nullable)instagramUsername __attribute__((swift_name("instagramUsername(instagramUsername:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)lastNameLastName:(NSString * _Nullable)lastName __attribute__((swift_name("lastName(lastName:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)oldPasswordOldPassword:(NSString * _Nullable)oldPassword __attribute__((swift_name("oldPassword(oldPassword:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)passwordPassword:(NSString * _Nullable)password __attribute__((swift_name("password(password:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)phonePhone:(NSString * _Nullable)phone __attribute__((swift_name("phone(phone:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)privateProfilePrivateProfile:(CybertronBoolean * _Nullable)privateProfile __attribute__((swift_name("privateProfile(privateProfile:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CybertronUserProfileObjectUpdaterBuilder *)twitterUsernameTwitterUsername:(NSString * _Nullable)twitterUsername __attribute__((swift_name("twitterUsername(twitterUsername:)")));
- (CybertronUserProfileObjectUpdaterBuilder *)voipTokenVoipToken:(NSString * _Nullable)voipToken __attribute__((swift_name("voipToken(voipToken:)")));
@property CybertronBoolean * _Nullable allowFriendsToAutoAddToRoom __attribute__((swift_name("allowFriendsToAutoAddToRoom")));
@property NSString * _Nullable apnToken __attribute__((swift_name("apnToken")));
@property NSString * _Nullable avatarFilename __attribute__((swift_name("avatarFilename")));
@property NSString * _Nullable bio __attribute__((swift_name("bio")));
@property NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable facebookUserId __attribute__((swift_name("facebookUserId")));
@property NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property NSString * _Nullable gcmToken __attribute__((swift_name("gcmToken")));
@property NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property NSString * _Nullable oldPassword __attribute__((swift_name("oldPassword")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable phone __attribute__((swift_name("phone")));
@property CybertronBoolean * _Nullable privateProfile __attribute__((swift_name("privateProfile")));
@property NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property NSString * _Nullable voipToken __attribute__((swift_name("voipToken")));
@end;

__attribute__((swift_name("PaginatedResponse")))
@interface CybertronPaginatedResponse<T> : CybertronBase
- (instancetype)initWithResults:(NSArray<id> *)results __attribute__((swift_name("init(results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPaginatedResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<id> *results __attribute__((swift_name("results")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResponseCompanion")))
@interface CybertronPaginatedResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPaginatedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(CybertronKotlinArray<id<CybertronKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<CybertronKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvatarResponse")))
@interface CybertronAvatarResponse : CybertronBase
- (instancetype)initWithCode:(NSString * _Nullable)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronAvatarResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronAvatarResponse *)doCopyCode:(NSString * _Nullable)code __attribute__((swift_name("doCopy(code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvatarResponse.Companion")))
@interface CybertronAvatarResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAvatarResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyAllocation")))
@interface CybertronBixbyAllocation : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronBixbyAllocationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property int32_t port __attribute__((swift_name("port")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) CybertronBixbyTurnInfo * _Nullable turnInfo __attribute__((swift_name("turnInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyAllocation.Companion")))
@interface CybertronBixbyAllocationCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronBixbyAllocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyResponse")))
@interface CybertronBixbyResponse : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronBixbyResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowAudio __attribute__((swift_name("allowAudio")));
@property (readonly) BOOL allowVideo __attribute__((swift_name("allowVideo")));
@property CybertronBixbyAllocation * _Nullable bixby __attribute__((swift_name("bixby")));
@property (readonly) BOOL enableTracing __attribute__((swift_name("enableTracing")));
@property (readonly) BOOL isFlagged __attribute__((swift_name("isFlagged")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyResponse.Companion")))
@interface CybertronBixbyResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronBixbyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyTurnInfo")))
@interface CybertronBixbyTurnInfo : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronBixbyTurnInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BixbyTurnInfo.Companion")))
@interface CybertronBixbyTurnInfoCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronBixbyTurnInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallMetaRequest")))
@interface CybertronCallMetaRequest : CybertronBase
- (instancetype)initWithAvatarId:(NSString * _Nullable)avatarId avatarColor:(NSString * _Nullable)avatarColor __attribute__((swift_name("init(avatarId:avatarColor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBattery:(int32_t)battery __attribute__((swift_name("init(battery:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIncludeAvatarOnly:(BOOL)includeAvatarOnly includeBatteryOnly:(BOOL)includeBatteryOnly avatarId:(NSString * _Nullable)avatarId avatarColor:(NSString * _Nullable)avatarColor battery:(int32_t)battery __attribute__((swift_name("init(includeAvatarOnly:includeBatteryOnly:avatarId:avatarColor:battery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronCallMetaRequestCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (CybertronCallMetaRequest *)doCopyIncludeAvatarOnly:(BOOL)includeAvatarOnly includeBatteryOnly:(BOOL)includeBatteryOnly avatarId:(NSString * _Nullable)avatarId avatarColor:(NSString * _Nullable)avatarColor battery:(int32_t)battery __attribute__((swift_name("doCopy(includeAvatarOnly:includeBatteryOnly:avatarId:avatarColor:battery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarColor __attribute__((swift_name("avatarColor")));
@property (readonly) NSString * _Nullable avatarId __attribute__((swift_name("avatarId")));
@property (readonly) int32_t battery __attribute__((swift_name("battery")));
@property (readonly) BOOL includeAvatarOnly __attribute__((swift_name("includeAvatarOnly")));
@property (readonly) BOOL includeBatteryOnly __attribute__((swift_name("includeBatteryOnly")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallMetaRequest.Companion")))
@interface CybertronCallMetaRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronCallMetaRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListStreamsTokenResponse")))
@interface CybertronListStreamsTokenResponse : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronListStreamsTokenResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable authToken __attribute__((swift_name("authToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListStreamsTokenResponse.Companion")))
@interface CybertronListStreamsTokenResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronListStreamsTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRemoteConfig")))
@interface CybertronMediaRemoteConfig : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronMediaRemoteConfigCompanion *companion __attribute__((swift_name("companion")));
@property BOOL mediaPermissions __attribute__((swift_name("mediaPermissions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRemoteConfig.Companion")))
@interface CybertronMediaRemoteConfigCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMediaRemoteConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishRequest")))
@interface CybertronPublishRequest : CybertronBase
- (instancetype)initWithBroadcast:(BOOL)broadcast avatarId:(NSString * _Nullable)avatarId avatarColor:(NSString * _Nullable)avatarColor battery:(int32_t)battery preferredBixby:(NSString *)preferredBixby permissionsSupported:(BOOL)permissionsSupported __attribute__((swift_name("init(broadcast:avatarId:avatarColor:battery:preferredBixby:permissionsSupported:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronPublishRequestCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (CybertronPublishRequest *)doCopyBroadcast:(BOOL)broadcast avatarId:(NSString * _Nullable)avatarId avatarColor:(NSString * _Nullable)avatarColor battery:(int32_t)battery preferredBixby:(NSString *)preferredBixby permissionsSupported:(BOOL)permissionsSupported __attribute__((swift_name("doCopy(broadcast:avatarId:avatarColor:battery:preferredBixby:permissionsSupported:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarColor __attribute__((swift_name("avatarColor")));
@property (readonly) NSString * _Nullable avatarId __attribute__((swift_name("avatarId")));
@property (readonly) int32_t battery __attribute__((swift_name("battery")));
@property BOOL broadcast __attribute__((swift_name("broadcast")));
@property (readonly) BOOL permissionsSupported __attribute__((swift_name("permissionsSupported")));
@property (readonly) NSString *preferredBixby __attribute__((swift_name("preferredBixby")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublishRequest.Companion")))
@interface CybertronPublishRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPublishRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeRequest")))
@interface CybertronSubscribeRequest : CybertronBase
- (instancetype)initWithStream:(NSString * _Nullable)stream userId:(NSString * _Nullable)userId preferredBixby:(NSString * _Nullable)preferredBixby accessToken:(NSString * _Nullable)accessToken __attribute__((swift_name("init(stream:userId:preferredBixby:accessToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSubscribeRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronSubscribeRequest *)doCopyStream:(NSString * _Nullable)stream userId:(NSString * _Nullable)userId preferredBixby:(NSString * _Nullable)preferredBixby accessToken:(NSString * _Nullable)accessToken __attribute__((swift_name("doCopy(stream:userId:preferredBixby:accessToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString * _Nullable preferredBixby __attribute__((swift_name("preferredBixby")));
@property (readonly) NSString * _Nullable stream __attribute__((swift_name("stream")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeRequest.Companion")))
@interface CybertronSubscribeRequestCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSubscribeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnpublishResponse")))
@interface CybertronUnpublishResponse : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronUnpublishResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL shouldPromptUser __attribute__((swift_name("shouldPromptUser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnpublishResponse.Companion")))
@interface CybertronUnpublishResponseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUnpublishResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol CybertronKoin_coreKoinComponent
@required
- (CybertronKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthRemoteService")))
@interface CybertronAuthRemoteService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)initWithClient:(CybertronKtor_client_coreHttpClient *)client deviceId:(NSString *)deviceId __attribute__((swift_name("init(client:deviceId:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyCodeCode:(NSString *)code phoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(CybertronVerifyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyCode(code:phoneNumber:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyCodeWithTokenToken:(NSString *)token code:(NSString *)code phoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(CybertronVerifyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyCodeWithToken(token:code:phoneNumber:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyPhoneNumberPhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(CybertronAuthResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPhoneNumber(phoneNumber:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyPhoneNumberWithTokenToken:(NSString *)token phoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(CybertronAuthResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPhoneNumberWithToken(token:phoneNumber:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRemoteService")))
@interface CybertronMediaRemoteService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)listStreamsTokenWithCompletionHandler:(void (^)(CybertronListStreamsTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listStreamsToken(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)metaRoomId:(NSString *)roomId callMetaRequest:(CybertronCallMetaRequest *)callMetaRequest completionHandler:(void (^)(CybertronAvatarResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("meta(roomId:callMetaRequest:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)publishRoomId:(NSString *)roomId publishRequest:(CybertronPublishRequest *)publishRequest completionHandler:(void (^)(CybertronBixbyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("publish(roomId:publishRequest:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)remoteConfigWithCompletionHandler:(void (^)(CybertronMediaRemoteConfig * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remoteConfig(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)subscribeRoomId:(NSString *)roomId subscribeRequest:(CybertronSubscribeRequest *)subscribeRequest completionHandler:(void (^)(CybertronBixbyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("subscribe(roomId:subscribeRequest:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unpublishRoomId:(NSString *)roomId completionHandler:(void (^)(CybertronUnpublishResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unpublish(roomId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PalpatineRemoteService")))
@interface CybertronPalpatineRemoteService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllocationWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllocation(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomRemoteService")))
@interface CybertronRoomRemoteService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptSelfRequestToJoinRoomId:(NSString *)roomId roomAccessKey:(NSString * _Nullable)roomAccessKey roomJoinToken:(NSString * _Nullable)roomJoinToken completionHandler:(void (^)(CybertronRoomJoinResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("acceptSelfRequestToJoin(roomId:roomAccessKey:roomJoinToken:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)cancelInviteForUserRoomId:(NSString *)roomId userId:(NSString *)userId completionHandler:(void (^)(CybertronKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelInviteForUser(roomId:userId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)declineSelfRequestToJoinRoomId:(NSString *)roomId completionHandler:(void (^)(CybertronKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("declineSelfRequestToJoin(roomId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLiveRoomsPaginationMap:(NSDictionary<NSString *, NSString *> *)paginationMap completionHandler:(void (^)(CybertronPaginatedResults<CybertronRoom *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLiveRooms(paginationMap:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomRoomId:(NSString *)roomId completionHandler:(void (^)(CybertronRoom * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoom(roomId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomMembersRoomId:(NSString *)roomId userId:(NSString *)userId pairs:(NSArray<CybertronKotlinPair<CybertronMembershipRole *, CybertronMembershipState *> *> * _Nullable)pairs paginationMap:(NSDictionary<NSString *, NSString *> *)paginationMap completionHandler:(void (^)(CybertronPaginatedResults<CybertronMember *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomMembers(roomId:userId:pairs:paginationMap:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomMembersRoomId:(NSString *)roomId pairs:(NSArray<CybertronKotlinPair<CybertronMembershipRole *, CybertronMembershipState *> *> * _Nullable)pairs paginationMap:(NSDictionary<NSString *, NSString *> *)paginationMap completionHandler:(void (^)(CybertronPaginatedResults<CybertronMember *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomMembers(roomId:pairs:paginationMap:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomsPaginationMap:(NSDictionary<NSString *, NSString *> *)paginationMap completionHandler:(void (^)(CybertronPaginatedResults<CybertronRoom *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRooms(paginationMap:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)inviteOrAcceptOthersRequestToJoinRoomId:(NSString *)roomId userId:(NSString *)userId completionHandler:(void (^)(CybertronMember * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("inviteOrAcceptOthersRequestToJoin(roomId:userId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinRoomRoomId:(NSString *)roomId completionHandler:(void (^)(CybertronRoomJoinResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinRoom(roomId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeOrDeclineOthersRequestToJoinRoomId:(NSString *)roomId userId:(NSString *)userId actionDurationPair:(CybertronKotlinPair<CybertronRemoveAction *, CybertronBanDuration *> * _Nullable)actionDurationPair completionHandler:(void (^)(CybertronKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeOrDeclineOthersRequestToJoin(roomId:userId:actionDurationPair:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeSelfFromRoomRoomId:(NSString *)roomId completionHandler:(void (^)(CybertronKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeSelfFromRoom(roomId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMembershipRoleRoomId:(NSString *)roomId memberUserId:(NSString *)memberUserId newRole:(CybertronMembershipRole *)newRole completionHandler:(void (^)(CybertronRoomMembershipUpdate * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateMembershipRole(roomId:memberUserId:newRole:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRoomRoom:(CybertronRoom *)room completionHandler:(void (^)(CybertronRoom * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateRoom(room:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelfRemoteService")))
@interface CybertronSelfRemoteService : CybertronBase
- (instancetype)initWithClient:(CybertronKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSelfProfileToken:(NSString * _Nullable)token completionHandler:(void (^)(CybertronSessionUser_ * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSelfProfile(token:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIEndpoints")))
@interface CybertronAPIEndpoints : CybertronBase <CybertronKoin_coreKoinComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aPIEndpoints __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronAPIEndpoints *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CommonSocketPayload")))
@interface CybertronCommonSocketPayload : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronCommonSocketPayloadCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) CybertronSocketAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) BOOL silent __attribute__((swift_name("silent")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonSocketPayload.Companion")))
@interface CybertronCommonSocketPayloadCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronCommonSocketPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(CybertronKotlinArray<id<CybertronKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end;

__attribute__((swift_name("FinalOrderEvent")))
@interface CybertronFinalOrderEvent : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("SocketEvent")))
@interface CybertronSocketEvent : CybertronBase
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronSocketEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *event __attribute__((swift_name("event")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinalOrderEvent.Batch")))
@interface CybertronFinalOrderEventBatch : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)batch __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronFinalOrderEventBatch *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinalOrderEvent.MembershipCounter")))
@interface CybertronFinalOrderEventMembershipCounter : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)membershipCounter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronFinalOrderEventMembershipCounter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinalOrderEvent.PresenceCounter")))
@interface CybertronFinalOrderEventPresenceCounter : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)presenceCounter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronFinalOrderEventPresenceCounter *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinalOrderEvent.Subscription")))
@interface CybertronFinalOrderEventSubscription : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)subscription __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronFinalOrderEventSubscription *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketAction")))
@interface CybertronSocketAction : CybertronKotlinEnum<CybertronSocketAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronSocketActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronSocketAction *add __attribute__((swift_name("add")));
@property (class, readonly) CybertronSocketAction *create __attribute__((swift_name("create")));
@property (class, readonly) CybertronSocketAction *read __attribute__((swift_name("read")));
@property (class, readonly) CybertronSocketAction *update __attribute__((swift_name("update")));
@property (class, readonly) CybertronSocketAction *delete_ __attribute__((swift_name("delete_")));
@property (class, readonly) CybertronSocketAction *eject __attribute__((swift_name("eject")));
@property (class, readonly) CybertronSocketAction *error __attribute__((swift_name("error")));
@property (class, readonly) CybertronSocketAction *expired __attribute__((swift_name("expired")));
@property (class, readonly) CybertronSocketAction *ban __attribute__((swift_name("ban")));
@property (class, readonly) CybertronSocketAction *unban __attribute__((swift_name("unban")));
@property (class, readonly) CybertronSocketAction *left __attribute__((swift_name("left")));
+ (CybertronKotlinArray<CybertronSocketAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketAction.Companion")))
@interface CybertronSocketActionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketActionCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Available")))
@interface CybertronSocketEventAvailable : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)available __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventAvailable *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Companion")))
@interface CybertronSocketEventCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSArray<CybertronSocketEvent *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Connect")))
@interface CybertronSocketEventConnect : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)connect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventConnect *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.ConnectError")))
@interface CybertronSocketEventConnectError : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)connectError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventConnectError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.ConnectTimeout")))
@interface CybertronSocketEventConnectTimeout : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)connectTimeout __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventConnectTimeout *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Disconnect")))
@interface CybertronSocketEventDisconnect : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)disconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventDisconnect *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.EnterRoom")))
@interface CybertronSocketEventEnterRoom : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)enterRoom __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventEnterRoom *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Error")))
@interface CybertronSocketEventError : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Expression")))
@interface CybertronSocketEventExpression : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)expression __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventExpression *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.ImageValidation")))
@interface CybertronSocketEventImageValidation : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)imageValidation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventImageValidation *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.LeaveRoom")))
@interface CybertronSocketEventLeaveRoom : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)leaveRoom __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventLeaveRoom *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Message")))
@interface CybertronSocketEventMessage : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)message __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventMessage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Moderator")))
@interface CybertronSocketEventModerator : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)moderator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventModerator *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.PhotoBooth")))
@interface CybertronSocketEventPhotoBooth : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)photoBooth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPhotoBooth *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Ping")))
@interface CybertronSocketEventPing : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)ping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPing *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Pong")))
@interface CybertronSocketEventPong : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)pong __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPong *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Presence")))
@interface CybertronSocketEventPresence : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)presence __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPresence *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.PresenceChange")))
@interface CybertronSocketEventPresenceChange : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)presenceChange __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPresenceChange *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Publishers")))
@interface CybertronSocketEventPublishers : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)publishers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventPublishers *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Reconnect")))
@interface CybertronSocketEventReconnect : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)reconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventReconnect *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.ReconnectAttempt")))
@interface CybertronSocketEventReconnectAttempt : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)reconnectAttempt __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventReconnectAttempt *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.ReconnectError")))
@interface CybertronSocketEventReconnectError : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)reconnectError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventReconnectError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Room")))
@interface CybertronSocketEventRoom : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)room __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoom *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomActionRequest")))
@interface CybertronSocketEventRoomActionRequest : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomActionRequest __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomActionRequest *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomCall")))
@interface CybertronSocketEventRoomCall : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomCall __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomCall *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomCallFlag")))
@interface CybertronSocketEventRoomCallFlag : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomCallFlag __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomCallFlag *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomMembership")))
@interface CybertronSocketEventRoomMembership : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomMembership __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomMembership *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomMessage")))
@interface CybertronSocketEventRoomMessage : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomMessage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomMessage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomMessageLike")))
@interface CybertronSocketEventRoomMessageLike : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomMessageLike __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomMessageLike *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomQueue")))
@interface CybertronSocketEventRoomQueue : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomQueue __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomQueue *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomStage")))
@interface CybertronSocketEventRoomStage : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomStage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomStage *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomSummon")))
@interface CybertronSocketEventRoomSummon : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomSummon __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomSummon *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomUploadValidation")))
@interface CybertronSocketEventRoomUploadValidation : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomUploadValidation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomUploadValidation *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomUser")))
@interface CybertronSocketEventRoomUser : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomUser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomUser *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomUserInvite")))
@interface CybertronSocketEventRoomUserInvite : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomUserInvite __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomUserInvite *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.RoomUserSuspension")))
@interface CybertronSocketEventRoomUserSuspension : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)roomUserSuspension __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventRoomUserSuspension *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Subscribe")))
@interface CybertronSocketEventSubscribe : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)subscribe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSubscribe *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Subscribed")))
@interface CybertronSocketEventSubscribed : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)subscribed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSubscribed *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Subscriptions")))
@interface CybertronSocketEventSubscriptions : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)subscriptions __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSubscriptions *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Sync")))
@interface CybertronSocketEventSync : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)sync __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSync *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.System")))
@interface CybertronSocketEventSystem : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)system __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSystem *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Unsubscribe")))
@interface CybertronSocketEventUnsubscribe : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)unsubscribe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventUnsubscribe *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.UserFollow")))
@interface CybertronSocketEventUserFollow : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)userFollow __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventUserFollow *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.UserFriend")))
@interface CybertronSocketEventUserFriend : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)userFriend __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventUserFriend *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.UserSuspension")))
@interface CybertronSocketEventUserSuspension : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)userSuspension __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventUserSuspension *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEvent.Wham")))
@interface CybertronSocketEventWham : CybertronSocketEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)wham __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventWham *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CybertronKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CybertronKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CybertronKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CybertronKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CybertronKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CybertronKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CybertronKotlinx_serialization_coreKSerializer <CybertronKotlinx_serialization_coreSerializationStrategy, CybertronKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventSerializer")))
@interface CybertronSocketEventSerializer : CybertronBase <CybertronKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)socketEventSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronSocketEventSerializer *shared __attribute__((swift_name("shared")));
- (CybertronSocketEvent *)deserializeDecoder:(id<CybertronKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<CybertronKotlinx_serialization_coreEncoder>)encoder value:(CybertronSocketEvent *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CybertronKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusDatabaseWrapper")))
@interface CybertronPrimusDatabaseWrapper : CybertronBase
- (instancetype)initWithInstance:(id<CybertronPrimusDatabase>)instance __attribute__((swift_name("init(instance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronPrimusDatabase> instance __attribute__((swift_name("instance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageLocalService")))
@interface CybertronMessageLocalService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)deleteAllMessagesRoomId:(NSString *)roomId __attribute__((swift_name("deleteAllMessages(roomId:)")));
- (void)deleteMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("deleteMessage(roomId:messageId:)")));
- (void)editMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId body:(CybertronMessageBody * _Nullable)body __attribute__((swift_name("editMessage(roomId:messageId:body:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("getMessage(roomId:messageId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMessagesForRoomRoomId:(NSString *)roomId __attribute__((swift_name("getMessagesForRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMessagesForRoomByIdRoomId:(NSString *)roomId ids:(NSArray<NSString *> *)ids __attribute__((swift_name("getMessagesForRoomById(roomId:ids:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMessagesForRoomInIntervalRoomId:(NSString *)roomId startTime:(CybertronKotlinx_datetimeInstant *)startTime endTime:(CybertronKotlinx_datetimeInstant *)endTime __attribute__((swift_name("getMessagesForRoomInInterval(roomId:startTime:endTime:)")));
- (void)insertMessages:(NSArray<CybertronMessage *> *)messages __attribute__((swift_name("insert(messages:)")));
- (void)updateFlagsRoomId:(NSString *)roomId messageId:(NSString *)messageId flags:(NSArray<CybertronMessageFlag *> *)flags __attribute__((swift_name("updateFlags(roomId:messageId:flags:)")));
- (void)updateMessageMessage:(CybertronMessage *)message __attribute__((swift_name("updateMessage(message:)")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol CybertronRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<CybertronRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<CybertronRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("PrimusDatabase")))
@protocol CybertronPrimusDatabase <CybertronRuntimeTransacter>
@required
@property (readonly) id<CybertronMemberQueries> memberQueries __attribute__((swift_name("memberQueries")));
@property (readonly) id<CybertronMessageQueries> messageQueries __attribute__((swift_name("messageQueries")));
@property (readonly) id<CybertronPresenceQueries> presenceQueries __attribute__((swift_name("presenceQueries")));
@property (readonly) id<CybertronRoomQueries> roomQueries __attribute__((swift_name("roomQueries")));
@property (readonly) id<CybertronSessionQueries> sessionQueries __attribute__((swift_name("sessionQueries")));
@property (readonly) id<CybertronUserQueries> userQueries __attribute__((swift_name("userQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimusDatabaseCompanion")))
@interface CybertronPrimusDatabaseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPrimusDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronPrimusDatabase>)invokeDriver:(id<CybertronRuntimeSqlDriver>)driver MemberAdapter:(CybertronMember_Adapter *)MemberAdapter MessageAdapter:(CybertronMessage_Adapter *)MessageAdapter PresenceAdapter:(CybertronPresence___Adapter *)PresenceAdapter RoomAdapter:(CybertronRoom_Adapter *)RoomAdapter SessionAdapter:(CybertronSessionAdapter *)SessionAdapter UserAdapter:(CybertronUser_Adapter *)UserAdapter __attribute__((swift_name("invoke(driver:MemberAdapter:MessageAdapter:PresenceAdapter:RoomAdapter:SessionAdapter:UserAdapter:)")));
@property (readonly) id<CybertronRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomLocalService")))
@interface CybertronRoomLocalService : CybertronBase
- (instancetype)initWithPrimusDatabase:(CybertronPrimusDatabaseWrapper *)primusDatabase __attribute__((swift_name("init(primusDatabase:)"))) __attribute__((objc_designated_initializer));
- (void)cleanInvalidPresences __attribute__((swift_name("cleanInvalidPresences()")));
- (void)deleteMemberRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("deleteMember(roomId:userId:)")));
- (void)deletePresenceUserId:(NSString *)userId __attribute__((swift_name("deletePresence(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomRoomId:(NSString *)roomId __attribute__((swift_name("getRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMemberWithPresenceRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("getRoomMemberWithPresence(roomId:userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMembersRoomId:(NSString *)roomId filterStates:(NSArray<CybertronMembershipState *> *)filterStates filterRoles:(NSArray<CybertronMembershipRole *> *)filterRoles __attribute__((swift_name("getRoomMembers(roomId:filterStates:filterRoles:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMembersWithPresenceRoomId:(NSString *)roomId filterStates:(NSArray<CybertronMembershipState *> *)filterStates filterRoles:(NSArray<CybertronMembershipRole *> *)filterRoles __attribute__((swift_name("getRoomMembersWithPresence(roomId:filterStates:filterRoles:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomsRoomIds:(NSArray<NSString *> *)roomIds __attribute__((swift_name("getRooms(roomIds:)")));
- (void)saveMembersRoomId:(NSString *)roomId members:(NSArray<CybertronMember *> *)members __attribute__((swift_name("saveMembers(roomId:members:)")));
- (void)savePresencesPresences:(NSArray<CybertronPresence *> *)presences __attribute__((swift_name("savePresences(presences:)")));
- (void)saveRoomsRooms:(NSArray<CybertronRoom *> *)rooms __attribute__((swift_name("saveRooms(rooms:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelfLocalService")))
@interface CybertronSelfLocalService : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clearSession __attribute__((swift_name("clearSession()")));
- (CybertronSession * _Nullable)getSession __attribute__((swift_name("getSession()")));
- (void)saveSessionSessionUser:(CybertronSessionUser_ *)sessionUser token:(NSString *)token __attribute__((swift_name("saveSession(sessionUser:token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Member_")))
@interface CybertronMember_ : CybertronBase
- (instancetype)initWithInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room __attribute__((swift_name("init(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronState * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CybertronMembershipState * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMembershipRole * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronUser_ *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (CybertronMember_ *)doCopyInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room __attribute__((swift_name("doCopy(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable invitedBy __attribute__((swift_name("invitedBy")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser_ *user __attribute__((swift_name("user")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Member_.Adapter")))
@interface CybertronMember_Adapter : CybertronBase
- (instancetype)initWithUpdatedAtAdapter:(id<CybertronRuntimeColumnAdapter>)updatedAtAdapter createdAtAdapter:(id<CybertronRuntimeColumnAdapter>)createdAtAdapter membershipStateAdapter:(id<CybertronRuntimeColumnAdapter>)membershipStateAdapter membershipRoleAdapter:(id<CybertronRuntimeColumnAdapter>)membershipRoleAdapter tagsAdapter:(id<CybertronRuntimeColumnAdapter>)tagsAdapter userAdapter:(id<CybertronRuntimeColumnAdapter>)userAdapter stateAdapter:(id<CybertronRuntimeColumnAdapter>)stateAdapter __attribute__((swift_name("init(updatedAtAdapter:createdAtAdapter:membershipStateAdapter:membershipRoleAdapter:tagsAdapter:userAdapter:stateAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> createdAtAdapter __attribute__((swift_name("createdAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> membershipRoleAdapter __attribute__((swift_name("membershipRoleAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> membershipStateAdapter __attribute__((swift_name("membershipStateAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> stateAdapter __attribute__((swift_name("stateAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> tagsAdapter __attribute__((swift_name("tagsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> updatedAtAdapter __attribute__((swift_name("updatedAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> userAdapter __attribute__((swift_name("userAdapter")));
@end;

__attribute__((swift_name("MemberQueries")))
@protocol CybertronMemberQueries <CybertronRuntimeTransacter>
@required
- (void)deleteMemberFromRoomRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("deleteMemberFromRoom(roomId:userId:)")));
- (CybertronRuntimeQuery<CybertronMember_ *> *)getRoomMembersRoomId:(NSString *)roomId filterRoles:(id)filterRoles filterStates:(id)filterStates __attribute__((swift_name("getRoomMembers(roomId:filterRoles:filterStates:)")));
- (CybertronRuntimeQuery<id> *)getRoomMembersRoomId:(NSString *)roomId filterRoles:(id)filterRoles filterStates:(id)filterStates mapper:(id (^)(NSString * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSString *, CybertronMembershipState * _Nullable, CybertronMembershipRole * _Nullable, NSArray<NSString *> * _Nullable, CybertronUser_ *, NSString *, CybertronState * _Nullable, NSString *))mapper __attribute__((swift_name("getRoomMembers(roomId:filterRoles:filterStates:mapper:)")));
- (CybertronRuntimeQuery<CybertronRoomMemberWithPresence *> *)roomMemberWithPresenceRoomId:(NSString *)roomId filterRoles:(id)filterRoles filterStates:(id)filterStates __attribute__((swift_name("roomMemberWithPresence(roomId:filterRoles:filterStates:)")));
- (CybertronRuntimeQuery<id> *)roomMemberWithPresenceRoomId:(NSString *)roomId filterRoles:(id)filterRoles filterStates:(id)filterStates mapper:(id (^)(NSString * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSString *, CybertronMembershipState * _Nullable, CybertronMembershipRole * _Nullable, NSArray<NSString *> * _Nullable, CybertronUser_ *, NSString *, CybertronState * _Nullable, NSString *, NSString * _Nullable, NSString * _Nullable, CybertronPresenceActivity * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable))mapper __attribute__((swift_name("roomMemberWithPresence(roomId:filterRoles:filterStates:mapper:)")));
- (CybertronRuntimeQuery<CybertronRoomMemberWithPresenceById *> *)roomMemberWithPresenceByIdRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("roomMemberWithPresenceById(roomId:userId:)")));
- (CybertronRuntimeQuery<id> *)roomMemberWithPresenceByIdRoomId:(NSString *)roomId userId:(NSString *)userId mapper:(id (^)(NSString * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSString *, CybertronMembershipState * _Nullable, CybertronMembershipRole * _Nullable, NSArray<NSString *> * _Nullable, CybertronUser_ *, NSString *, CybertronState * _Nullable, NSString *, NSString * _Nullable, NSString * _Nullable, CybertronPresenceActivity * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable))mapper __attribute__((swift_name("roomMemberWithPresenceById(roomId:userId:mapper:)")));
- (void)upsertMemberMember:(CybertronMember_ *)Member __attribute__((swift_name("upsertMember(Member:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message_")))
@interface CybertronMessage_ : CybertronBase
- (instancetype)initWithId:(NSString *)id room:(NSString *)room user:(CybertronUser_ * _Nullable)user type:(CybertronMessageType *)type clientId:(NSString * _Nullable)clientId source:(NSString * _Nullable)source body:(CybertronMessageBody * _Nullable)body featuredViewers:(NSArray<CybertronUser_ *> * _Nullable)featuredViewers flags:(NSArray<CybertronMessageFlag *> * _Nullable)flags reactions:(NSArray<CybertronReaction *> * _Nullable)reactions createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt surveyOptions:(NSArray<CybertronSurveyOption *> * _Nullable)surveyOptions __attribute__((swift_name("init(id:room:user:type:clientId:source:body:featuredViewers:flags:reactions:createdAt:surveyOptions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<CybertronReaction *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<CybertronSurveyOption *> * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronUser_ * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronMessageType *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronMessageBody * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSArray<CybertronUser_ *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<CybertronMessageFlag *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronMessage_ *)doCopyId:(NSString *)id room:(NSString *)room user:(CybertronUser_ * _Nullable)user type:(CybertronMessageType *)type clientId:(NSString * _Nullable)clientId source:(NSString * _Nullable)source body:(CybertronMessageBody * _Nullable)body featuredViewers:(NSArray<CybertronUser_ *> * _Nullable)featuredViewers flags:(NSArray<CybertronMessageFlag *> * _Nullable)flags reactions:(NSArray<CybertronReaction *> * _Nullable)reactions createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt surveyOptions:(NSArray<CybertronSurveyOption *> * _Nullable)surveyOptions __attribute__((swift_name("doCopy(id:room:user:type:clientId:source:body:featuredViewers:flags:reactions:createdAt:surveyOptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronMessageBody * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSArray<CybertronUser_ *> * _Nullable featuredViewers __attribute__((swift_name("featuredViewers")));
@property (readonly) NSArray<CybertronMessageFlag *> * _Nullable flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<CybertronReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@property (readonly) NSArray<CybertronSurveyOption *> * _Nullable surveyOptions __attribute__((swift_name("surveyOptions")));
@property (readonly) CybertronMessageType *type __attribute__((swift_name("type")));
@property (readonly) CybertronUser_ * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message_.Adapter")))
@interface CybertronMessage_Adapter : CybertronBase
- (instancetype)initWithUserAdapter:(id<CybertronRuntimeColumnAdapter>)userAdapter typeAdapter:(id<CybertronRuntimeColumnAdapter>)typeAdapter bodyAdapter:(id<CybertronRuntimeColumnAdapter>)bodyAdapter featuredViewersAdapter:(id<CybertronRuntimeColumnAdapter>)featuredViewersAdapter flagsAdapter:(id<CybertronRuntimeColumnAdapter>)flagsAdapter reactionsAdapter:(id<CybertronRuntimeColumnAdapter>)reactionsAdapter createdAtAdapter:(id<CybertronRuntimeColumnAdapter>)createdAtAdapter surveyOptionsAdapter:(id<CybertronRuntimeColumnAdapter>)surveyOptionsAdapter __attribute__((swift_name("init(userAdapter:typeAdapter:bodyAdapter:featuredViewersAdapter:flagsAdapter:reactionsAdapter:createdAtAdapter:surveyOptionsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> bodyAdapter __attribute__((swift_name("bodyAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> createdAtAdapter __attribute__((swift_name("createdAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredViewersAdapter __attribute__((swift_name("featuredViewersAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> flagsAdapter __attribute__((swift_name("flagsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> reactionsAdapter __attribute__((swift_name("reactionsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> surveyOptionsAdapter __attribute__((swift_name("surveyOptionsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> typeAdapter __attribute__((swift_name("typeAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> userAdapter __attribute__((swift_name("userAdapter")));
@end;

__attribute__((swift_name("MessageQueries")))
@protocol CybertronMessageQueries <CybertronRuntimeTransacter>
@required
- (void)createOrUpdateMessage:(CybertronMessage_ *)Message __attribute__((swift_name("createOrUpdate(Message:)")));
- (void)deleteAllMessagesRoom:(NSString *)room __attribute__((swift_name("deleteAllMessages(room:)")));
- (void)deleteMessageRoom:(NSString *)room id:(NSString *)id __attribute__((swift_name("deleteMessage(room:id:)")));
- (void)editMessageBody:(CybertronMessageBody * _Nullable)body room:(NSString *)room id:(NSString *)id __attribute__((swift_name("editMessage(body:room:id:)")));
- (CybertronRuntimeQuery<CybertronMessage_ *> *)getMessageForRoomRoom:(NSString *)room id:(NSString *)id __attribute__((swift_name("getMessageForRoom(room:id:)")));
- (CybertronRuntimeQuery<id> *)getMessageForRoomRoom:(NSString *)room id:(NSString *)id mapper:(id (^)(NSString *, NSString *, CybertronUser_ * _Nullable, CybertronMessageType *, NSString * _Nullable, NSString * _Nullable, CybertronMessageBody * _Nullable, NSArray<CybertronUser_ *> * _Nullable, NSArray<CybertronMessageFlag *> * _Nullable, NSArray<CybertronReaction *> * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSArray<CybertronSurveyOption *> * _Nullable))mapper __attribute__((swift_name("getMessageForRoom(room:id:mapper:)")));
- (CybertronRuntimeQuery<CybertronMessage_ *> *)getMessagesForRoomRoom:(NSString *)room __attribute__((swift_name("getMessagesForRoom(room:)")));
- (CybertronRuntimeQuery<id> *)getMessagesForRoomRoom:(NSString *)room mapper:(id (^)(NSString *, NSString *, CybertronUser_ * _Nullable, CybertronMessageType *, NSString * _Nullable, NSString * _Nullable, CybertronMessageBody * _Nullable, NSArray<CybertronUser_ *> * _Nullable, NSArray<CybertronMessageFlag *> * _Nullable, NSArray<CybertronReaction *> * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSArray<CybertronSurveyOption *> * _Nullable))mapper __attribute__((swift_name("getMessagesForRoom(room:mapper:)")));
- (CybertronRuntimeQuery<CybertronMessage_ *> *)getMessagesForRoomByIdRoom:(NSString *)room id:(id)id __attribute__((swift_name("getMessagesForRoomById(room:id:)")));
- (CybertronRuntimeQuery<id> *)getMessagesForRoomByIdRoom:(NSString *)room id:(id)id mapper:(id (^)(NSString *, NSString *, CybertronUser_ * _Nullable, CybertronMessageType *, NSString * _Nullable, NSString * _Nullable, CybertronMessageBody * _Nullable, NSArray<CybertronUser_ *> * _Nullable, NSArray<CybertronMessageFlag *> * _Nullable, NSArray<CybertronReaction *> * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSArray<CybertronSurveyOption *> * _Nullable))mapper __attribute__((swift_name("getMessagesForRoomById(room:id:mapper:)")));
- (CybertronRuntimeQuery<CybertronMessage_ *> *)getMessagesInIntervalForRoomRoom:(NSString *)room createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt createdAt_:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt_ __attribute__((swift_name("getMessagesInIntervalForRoom(room:createdAt:createdAt_:)")));
- (CybertronRuntimeQuery<id> *)getMessagesInIntervalForRoomRoom:(NSString *)room createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt createdAt_:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt_ mapper:(id (^)(NSString *, NSString *, CybertronUser_ * _Nullable, CybertronMessageType *, NSString * _Nullable, NSString * _Nullable, CybertronMessageBody * _Nullable, NSArray<CybertronUser_ *> * _Nullable, NSArray<CybertronMessageFlag *> * _Nullable, NSArray<CybertronReaction *> * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, NSArray<CybertronSurveyOption *> * _Nullable))mapper __attribute__((swift_name("getMessagesInIntervalForRoom(room:createdAt:createdAt_:mapper:)")));
- (void)updateFlagsFlags:(NSArray<CybertronMessageFlag *> * _Nullable)flags room:(NSString *)room id:(NSString *)id __attribute__((swift_name("updateFlags(flags:room:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence___")))
@interface CybertronPresence___ : CybertronBase
- (instancetype)initWithUser:(NSString *)user room:(NSString *)room activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("init(user:room:activity:validUntil:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronPresenceActivity * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronPresence___ *)doCopyUser:(NSString *)user room:(NSString *)room activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("doCopy(user:room:activity:validUntil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronPresenceActivity * _Nullable activity __attribute__((swift_name("activity")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) NSString *user __attribute__((swift_name("user")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable validUntil __attribute__((swift_name("validUntil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Presence___.Adapter")))
@interface CybertronPresence___Adapter : CybertronBase
- (instancetype)initWithActivityAdapter:(id<CybertronRuntimeColumnAdapter>)activityAdapter validUntilAdapter:(id<CybertronRuntimeColumnAdapter>)validUntilAdapter __attribute__((swift_name("init(activityAdapter:validUntilAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> activityAdapter __attribute__((swift_name("activityAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> validUntilAdapter __attribute__((swift_name("validUntilAdapter")));
@end;

__attribute__((swift_name("PresenceQueries")))
@protocol CybertronPresenceQueries <CybertronRuntimeTransacter>
@required
- (void)deleteInvalidPresences __attribute__((swift_name("deleteInvalidPresences()")));
- (void)deletePresenceUser:(NSString *)user __attribute__((swift_name("deletePresence(user:)")));
- (void)upsertPresenceUser:(NSString *)user room:(NSString *)room activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("upsertPresence(user:room:activity:validUntil:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_")))
@interface CybertronRoom_ : CybertronBase
- (instancetype)initWithId:(NSString *)id owner:(CybertronUser_ * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(CybertronVisibility * _Nullable)visibility accessibility:(CybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(CybertronLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(CybertronInt * _Nullable)memberCount spectatorCount:(CybertronInt * _Nullable)spectatorCount invitedCount:(CybertronInt * _Nullable)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(CybertronState * _Nullable)state membershipRole:(CybertronMembershipRole * _Nullable)membershipRole membershipState:(CybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<CybertronUser_ *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<CybertronUser_ *> *)presence createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(CybertronCall * _Nullable)call permissions:(CybertronPermissions * _Nullable)permissions __attribute__((swift_name("init(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (CybertronLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (CybertronInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (CybertronInt * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (BOOL)component19 __attribute__((swift_name("component19()")));
- (CybertronUser_ * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component20 __attribute__((swift_name("component20()")));
- (CybertronState * _Nullable)component21 __attribute__((swift_name("component21()")));
- (CybertronMembershipRole * _Nullable)component22 __attribute__((swift_name("component22()")));
- (CybertronMembershipState * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSArray<NSString *> *)component26 __attribute__((swift_name("component26()")));
- (NSArray<NSString *> *)component27 __attribute__((swift_name("component27()")));
- (NSArray<NSString *> *)component28 __attribute__((swift_name("component28()")));
- (NSArray<NSString *> *)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component30 __attribute__((swift_name("component30()")));
- (NSArray<CybertronUser_ *> *)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSArray<CybertronUser_ *> *)component33 __attribute__((swift_name("component33()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component34 __attribute__((swift_name("component34()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component35 __attribute__((swift_name("component35()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component36 __attribute__((swift_name("component36()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component37 __attribute__((swift_name("component37()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component38 __attribute__((swift_name("component38()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component40 __attribute__((swift_name("component40()")));
- (CybertronCall * _Nullable)component41 __attribute__((swift_name("component41()")));
- (CybertronPermissions * _Nullable)component42 __attribute__((swift_name("component42()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> *)component6 __attribute__((swift_name("component6()")));
- (CybertronVisibility * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronAccessibility * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CybertronRoom_ *)doCopyId:(NSString *)id owner:(CybertronUser_ * _Nullable)owner title:(NSString * _Nullable)title topic:(NSString * _Nullable)topic color:(NSString * _Nullable)color tags:(NSArray<NSString *> *)tags visibility:(CybertronVisibility * _Nullable)visibility accessibility:(CybertronAccessibility * _Nullable)accessibility live:(BOOL)live defaultNewMembersToSpectator:(BOOL)defaultNewMembersToSpectator allowGoLiveRoomRequests:(BOOL)allowGoLiveRoomRequests notificationMuteDuration:(CybertronLong * _Nullable)notificationMuteDuration unseen:(BOOL)unseen memberCount:(CybertronInt * _Nullable)memberCount spectatorCount:(CybertronInt * _Nullable)spectatorCount invitedCount:(CybertronInt * _Nullable)invitedCount accessToken:(NSString * _Nullable)accessToken favorite:(BOOL)favorite feature:(BOOL)feature visited:(BOOL)visited state:(CybertronState * _Nullable)state membershipRole:(CybertronMembershipRole * _Nullable)membershipRole membershipState:(CybertronMembershipState * _Nullable)membershipState imageUrl:(NSString * _Nullable)imageUrl optimizedUrl:(NSString * _Nullable)optimizedUrl featuredUsers:(NSArray<NSString *> *)featuredUsers featuredUsersAvatarUrls:(NSArray<NSString *> *)featuredUsersAvatarUrls featuredNames:(NSArray<NSString *> *)featuredNames featuredInviteeNames:(NSArray<NSString *> *)featuredInviteeNames featuredInvitees:(NSArray<NSString *> *)featuredInvitees featured:(NSArray<CybertronUser_ *> *)featured avatar:(NSString * _Nullable)avatar presence:(NSArray<CybertronUser_ *> *)presence createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt inviteCreatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteCreatedAt inviteUpdatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)inviteUpdatedAt lastCallAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastCallAt lastActivityAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastActivityAt lastMessageAt:(CybertronKotlinx_datetimeInstant * _Nullable)lastMessageAt call:(CybertronCall * _Nullable)call permissions:(CybertronPermissions * _Nullable)permissions __attribute__((swift_name("doCopy(id:owner:title:topic:color:tags:visibility:accessibility:live:defaultNewMembersToSpectator:allowGoLiveRoomRequests:notificationMuteDuration:unseen:memberCount:spectatorCount:invitedCount:accessToken:favorite:feature:visited:state:membershipRole:membershipState:imageUrl:optimizedUrl:featuredUsers:featuredUsersAvatarUrls:featuredNames:featuredInviteeNames:featuredInvitees:featured:avatar:presence:createdAt:updatedAt:inviteCreatedAt:inviteUpdatedAt:lastCallAt:lastActivityAt:lastMessageAt:call:permissions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) CybertronAccessibility * _Nullable accessibility __attribute__((swift_name("accessibility")));
@property (readonly) BOOL allowGoLiveRoomRequests __attribute__((swift_name("allowGoLiveRoomRequests")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) CybertronCall * _Nullable call __attribute__((swift_name("call")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) BOOL defaultNewMembersToSpectator __attribute__((swift_name("defaultNewMembersToSpectator")));
@property (readonly) BOOL favorite __attribute__((swift_name("favorite")));
@property (readonly) BOOL feature __attribute__((swift_name("feature")));
@property (readonly) NSArray<CybertronUser_ *> *featured __attribute__((swift_name("featured")));
@property (readonly) NSArray<NSString *> *featuredInviteeNames __attribute__((swift_name("featuredInviteeNames")));
@property (readonly) NSArray<NSString *> *featuredInvitees __attribute__((swift_name("featuredInvitees")));
@property (readonly) NSArray<NSString *> *featuredNames __attribute__((swift_name("featuredNames")));
@property (readonly) NSArray<NSString *> *featuredUsers __attribute__((swift_name("featuredUsers")));
@property (readonly) NSArray<NSString *> *featuredUsersAvatarUrls __attribute__((swift_name("featuredUsersAvatarUrls")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable inviteCreatedAt __attribute__((swift_name("inviteCreatedAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable inviteUpdatedAt __attribute__((swift_name("inviteUpdatedAt")));
@property (readonly) CybertronInt * _Nullable invitedCount __attribute__((swift_name("invitedCount")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastActivityAt __attribute__((swift_name("lastActivityAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastCallAt __attribute__((swift_name("lastCallAt")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable lastMessageAt __attribute__((swift_name("lastMessageAt")));
@property (readonly) BOOL live __attribute__((swift_name("live")));
@property (readonly) CybertronInt * _Nullable memberCount __attribute__((swift_name("memberCount")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) CybertronLong * _Nullable notificationMuteDuration __attribute__((swift_name("notificationMuteDuration")));
@property (readonly) NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));
@property (readonly) CybertronUser_ * _Nullable owner __attribute__((swift_name("owner")));
@property (readonly) CybertronPermissions * _Nullable permissions __attribute__((swift_name("permissions")));
@property (readonly) NSArray<CybertronUser_ *> *presence __attribute__((swift_name("presence")));
@property (readonly) CybertronInt * _Nullable spectatorCount __attribute__((swift_name("spectatorCount")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable topic __attribute__((swift_name("topic")));
@property (readonly) BOOL unseen __attribute__((swift_name("unseen")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronVisibility * _Nullable visibility __attribute__((swift_name("visibility")));
@property (readonly) BOOL visited __attribute__((swift_name("visited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_.Adapter")))
@interface CybertronRoom_Adapter : CybertronBase
- (instancetype)initWithOwnerAdapter:(id<CybertronRuntimeColumnAdapter>)ownerAdapter tagsAdapter:(id<CybertronRuntimeColumnAdapter>)tagsAdapter visibilityAdapter:(id<CybertronRuntimeColumnAdapter>)visibilityAdapter accessibilityAdapter:(id<CybertronRuntimeColumnAdapter>)accessibilityAdapter stateAdapter:(id<CybertronRuntimeColumnAdapter>)stateAdapter membershipRoleAdapter:(id<CybertronRuntimeColumnAdapter>)membershipRoleAdapter membershipStateAdapter:(id<CybertronRuntimeColumnAdapter>)membershipStateAdapter featuredUsersAdapter:(id<CybertronRuntimeColumnAdapter>)featuredUsersAdapter featuredUsersAvatarUrlsAdapter:(id<CybertronRuntimeColumnAdapter>)featuredUsersAvatarUrlsAdapter featuredNamesAdapter:(id<CybertronRuntimeColumnAdapter>)featuredNamesAdapter featuredInviteeNamesAdapter:(id<CybertronRuntimeColumnAdapter>)featuredInviteeNamesAdapter featuredInviteesAdapter:(id<CybertronRuntimeColumnAdapter>)featuredInviteesAdapter featuredAdapter:(id<CybertronRuntimeColumnAdapter>)featuredAdapter presenceAdapter:(id<CybertronRuntimeColumnAdapter>)presenceAdapter createdAtAdapter:(id<CybertronRuntimeColumnAdapter>)createdAtAdapter updatedAtAdapter:(id<CybertronRuntimeColumnAdapter>)updatedAtAdapter inviteCreatedAtAdapter:(id<CybertronRuntimeColumnAdapter>)inviteCreatedAtAdapter inviteUpdatedAtAdapter:(id<CybertronRuntimeColumnAdapter>)inviteUpdatedAtAdapter lastCallAtAdapter:(id<CybertronRuntimeColumnAdapter>)lastCallAtAdapter lastActivityAtAdapter:(id<CybertronRuntimeColumnAdapter>)lastActivityAtAdapter lastMessageAtAdapter:(id<CybertronRuntimeColumnAdapter>)lastMessageAtAdapter callAdapter:(id<CybertronRuntimeColumnAdapter>)callAdapter permissionsAdapter:(id<CybertronRuntimeColumnAdapter>)permissionsAdapter __attribute__((swift_name("init(ownerAdapter:tagsAdapter:visibilityAdapter:accessibilityAdapter:stateAdapter:membershipRoleAdapter:membershipStateAdapter:featuredUsersAdapter:featuredUsersAvatarUrlsAdapter:featuredNamesAdapter:featuredInviteeNamesAdapter:featuredInviteesAdapter:featuredAdapter:presenceAdapter:createdAtAdapter:updatedAtAdapter:inviteCreatedAtAdapter:inviteUpdatedAtAdapter:lastCallAtAdapter:lastActivityAtAdapter:lastMessageAtAdapter:callAdapter:permissionsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> accessibilityAdapter __attribute__((swift_name("accessibilityAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> callAdapter __attribute__((swift_name("callAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> createdAtAdapter __attribute__((swift_name("createdAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredAdapter __attribute__((swift_name("featuredAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredInviteeNamesAdapter __attribute__((swift_name("featuredInviteeNamesAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredInviteesAdapter __attribute__((swift_name("featuredInviteesAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredNamesAdapter __attribute__((swift_name("featuredNamesAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredUsersAdapter __attribute__((swift_name("featuredUsersAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> featuredUsersAvatarUrlsAdapter __attribute__((swift_name("featuredUsersAvatarUrlsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> inviteCreatedAtAdapter __attribute__((swift_name("inviteCreatedAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> inviteUpdatedAtAdapter __attribute__((swift_name("inviteUpdatedAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> lastActivityAtAdapter __attribute__((swift_name("lastActivityAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> lastCallAtAdapter __attribute__((swift_name("lastCallAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> lastMessageAtAdapter __attribute__((swift_name("lastMessageAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> membershipRoleAdapter __attribute__((swift_name("membershipRoleAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> membershipStateAdapter __attribute__((swift_name("membershipStateAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> ownerAdapter __attribute__((swift_name("ownerAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> permissionsAdapter __attribute__((swift_name("permissionsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> presenceAdapter __attribute__((swift_name("presenceAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> stateAdapter __attribute__((swift_name("stateAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> tagsAdapter __attribute__((swift_name("tagsAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> updatedAtAdapter __attribute__((swift_name("updatedAtAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> visibilityAdapter __attribute__((swift_name("visibilityAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomMemberWithPresence")))
@interface CybertronRoomMemberWithPresence : CybertronBase
- (instancetype)initWithInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room user_:(NSString * _Nullable)user_ room_:(NSString * _Nullable)room_ activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("init(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:user_:room_:activity:validUntil:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronState * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (CybertronPresenceActivity * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component15 __attribute__((swift_name("component15()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CybertronMembershipState * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMembershipRole * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronUser_ *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (CybertronRoomMemberWithPresence *)doCopyInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room user_:(NSString * _Nullable)user_ room_:(NSString * _Nullable)room_ activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("doCopy(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:user_:room_:activity:validUntil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronPresenceActivity * _Nullable activity __attribute__((swift_name("activity")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable invitedBy __attribute__((swift_name("invitedBy")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable room_ __attribute__((swift_name("room_")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser_ *user __attribute__((swift_name("user")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable user_ __attribute__((swift_name("user_")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable validUntil __attribute__((swift_name("validUntil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomMemberWithPresenceById")))
@interface CybertronRoomMemberWithPresenceById : CybertronBase
- (instancetype)initWithInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room user_:(NSString * _Nullable)user_ room_:(NSString * _Nullable)room_ activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("init(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:user_:room_:activity:validUntil:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CybertronState * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (CybertronPresenceActivity * _Nullable)component14 __attribute__((swift_name("component14()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component15 __attribute__((swift_name("component15()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinx_datetimeInstant * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CybertronMembershipState * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronMembershipRole * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronUser_ *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (CybertronRoomMemberWithPresenceById *)doCopyInvitedBy:(NSString * _Nullable)invitedBy updatedAt:(CybertronKotlinx_datetimeInstant * _Nullable)updatedAt createdAt:(CybertronKotlinx_datetimeInstant * _Nullable)createdAt type:(NSString *)type membershipState:(CybertronMembershipState * _Nullable)membershipState membershipRole:(CybertronMembershipRole * _Nullable)membershipRole tags:(NSArray<NSString *> * _Nullable)tags user:(CybertronUser_ *)user userId:(NSString *)userId state:(CybertronState * _Nullable)state room:(NSString *)room user_:(NSString * _Nullable)user_ room_:(NSString * _Nullable)room_ activity:(CybertronPresenceActivity * _Nullable)activity validUntil:(CybertronKotlinx_datetimeInstant * _Nullable)validUntil __attribute__((swift_name("doCopy(invitedBy:updatedAt:createdAt:type:membershipState:membershipRole:tags:user:userId:state:room:user_:room_:activity:validUntil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronPresenceActivity * _Nullable activity __attribute__((swift_name("activity")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable invitedBy __attribute__((swift_name("invitedBy")));
@property (readonly) CybertronMembershipRole * _Nullable membershipRole __attribute__((swift_name("membershipRole")));
@property (readonly) CybertronMembershipState * _Nullable membershipState __attribute__((swift_name("membershipState")));
@property (readonly) NSString *room __attribute__((swift_name("room")));
@property (readonly) NSString * _Nullable room_ __attribute__((swift_name("room_")));
@property (readonly) CybertronState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CybertronUser_ *user __attribute__((swift_name("user")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) NSString * _Nullable user_ __attribute__((swift_name("user_")));
@property (readonly) CybertronKotlinx_datetimeInstant * _Nullable validUntil __attribute__((swift_name("validUntil")));
@end;

__attribute__((swift_name("RoomQueries")))
@protocol CybertronRoomQueries <CybertronRuntimeTransacter>
@required
- (CybertronRuntimeQuery<CybertronRoom_ *> *)getAllRooms __attribute__((swift_name("getAllRooms()")));
- (CybertronRuntimeQuery<id> *)getAllRoomsMapper:(id (^)(NSString *, CybertronUser_ * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, CybertronVisibility * _Nullable, CybertronAccessibility * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronLong * _Nullable, CybertronBoolean *, CybertronInt * _Nullable, CybertronInt * _Nullable, CybertronInt * _Nullable, NSString * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronState * _Nullable, CybertronMembershipRole * _Nullable, CybertronMembershipState * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<CybertronUser_ *> *, NSString * _Nullable, NSArray<CybertronUser_ *> *, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronCall * _Nullable, CybertronPermissions * _Nullable))mapper __attribute__((swift_name("getAllRooms(mapper:)")));
- (CybertronRuntimeQuery<CybertronRoom_ *> *)getLiveRooms __attribute__((swift_name("getLiveRooms()")));
- (CybertronRuntimeQuery<id> *)getLiveRoomsMapper:(id (^)(NSString *, CybertronUser_ * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, CybertronVisibility * _Nullable, CybertronAccessibility * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronLong * _Nullable, CybertronBoolean *, CybertronInt * _Nullable, CybertronInt * _Nullable, CybertronInt * _Nullable, NSString * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronState * _Nullable, CybertronMembershipRole * _Nullable, CybertronMembershipState * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<CybertronUser_ *> *, NSString * _Nullable, NSArray<CybertronUser_ *> *, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronCall * _Nullable, CybertronPermissions * _Nullable))mapper __attribute__((swift_name("getLiveRooms(mapper:)")));
- (CybertronRuntimeQuery<CybertronRoom_ *> *)getMyRoomsState:(CybertronState * _Nullable)state __attribute__((swift_name("getMyRooms(state:)")));
- (CybertronRuntimeQuery<id> *)getMyRoomsState:(CybertronState * _Nullable)state mapper:(id (^)(NSString *, CybertronUser_ * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, CybertronVisibility * _Nullable, CybertronAccessibility * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronLong * _Nullable, CybertronBoolean *, CybertronInt * _Nullable, CybertronInt * _Nullable, CybertronInt * _Nullable, NSString * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronState * _Nullable, CybertronMembershipRole * _Nullable, CybertronMembershipState * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<CybertronUser_ *> *, NSString * _Nullable, NSArray<CybertronUser_ *> *, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronCall * _Nullable, CybertronPermissions * _Nullable))mapper __attribute__((swift_name("getMyRooms(state:mapper:)")));
- (CybertronRuntimeQuery<CybertronRoom_ *> *)getRoomId:(NSString *)id __attribute__((swift_name("getRoom(id:)")));
- (CybertronRuntimeQuery<id> *)getRoomId:(NSString *)id mapper:(id (^)(NSString *, CybertronUser_ * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, CybertronVisibility * _Nullable, CybertronAccessibility * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronLong * _Nullable, CybertronBoolean *, CybertronInt * _Nullable, CybertronInt * _Nullable, CybertronInt * _Nullable, NSString * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronState * _Nullable, CybertronMembershipRole * _Nullable, CybertronMembershipState * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<CybertronUser_ *> *, NSString * _Nullable, NSArray<CybertronUser_ *> *, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronCall * _Nullable, CybertronPermissions * _Nullable))mapper __attribute__((swift_name("getRoom(id:mapper:)")));
- (CybertronRuntimeQuery<CybertronRoom_ *> *)getRoomsId:(id)id __attribute__((swift_name("getRooms(id:)")));
- (CybertronRuntimeQuery<id> *)getRoomsId:(id)id mapper:(id (^)(NSString *, CybertronUser_ * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, CybertronVisibility * _Nullable, CybertronAccessibility * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronLong * _Nullable, CybertronBoolean *, CybertronInt * _Nullable, CybertronInt * _Nullable, CybertronInt * _Nullable, NSString * _Nullable, CybertronBoolean *, CybertronBoolean *, CybertronBoolean *, CybertronState * _Nullable, CybertronMembershipRole * _Nullable, CybertronMembershipState * _Nullable, NSString * _Nullable, NSString * _Nullable, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<NSString *> *, NSArray<CybertronUser_ *> *, NSString * _Nullable, NSArray<CybertronUser_ *> *, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronKotlinx_datetimeInstant * _Nullable, CybertronCall * _Nullable, CybertronPermissions * _Nullable))mapper __attribute__((swift_name("getRooms(id:mapper:)")));
- (void)updateRoomRoom:(CybertronRoom_ *)Room __attribute__((swift_name("updateRoom(Room:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session")))
@interface CybertronSession : CybertronBase
- (instancetype)initWithId:(NSString *)id token:(NSString * _Nullable)token phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl bio:(NSString * _Nullable)bio followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status __attribute__((swift_name("init(id:token:phone:email:firstName:lastName:username:verified:certified:avatarUrl:bio:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (CybertronLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (CybertronLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSArray<NSString *> *)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronSession *)doCopyId:(NSString *)id token:(NSString * _Nullable)token phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified certified:(CybertronBoolean * _Nullable)certified avatarUrl:(NSString * _Nullable)avatarUrl bio:(NSString * _Nullable)bio followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername dateOfBirth:(NSString * _Nullable)dateOfBirth status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(id:token:phone:email:firstName:lastName:username:verified:certified:avatarUrl:bio:followerCount:followingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:dateOfBirth:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) CybertronBoolean * _Nullable certified __attribute__((swift_name("certified")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) CybertronLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) CybertronLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session.Adapter")))
@interface CybertronSessionAdapter : CybertronBase
- (instancetype)initWithTagsAdapter:(id<CybertronRuntimeColumnAdapter>)tagsAdapter __attribute__((swift_name("init(tagsAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> tagsAdapter __attribute__((swift_name("tagsAdapter")));
@end;

__attribute__((swift_name("SessionQueries")))
@protocol CybertronSessionQueries <CybertronRuntimeTransacter>
@required
- (void)deleteSession __attribute__((swift_name("deleteSession()")));
- (CybertronRuntimeQuery<CybertronSession *> *)getSession __attribute__((swift_name("getSession()")));
- (CybertronRuntimeQuery<id> *)getSessionMapper:(id (^)(NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, CybertronBoolean * _Nullable, CybertronBoolean * _Nullable, NSString * _Nullable, NSString * _Nullable, CybertronLong * _Nullable, CybertronLong * _Nullable, NSArray<NSString *> *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("getSession(mapper:)")));
- (void)updateSessionSession:(CybertronSession *)Session __attribute__((swift_name("updateSession(Session:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_")))
@interface CybertronUser_ : CybertronBase
- (instancetype)initWithId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount mutualFollowingCount:(CybertronLong * _Nullable)mutualFollowingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername presence:(CybertronPresence_ * _Nullable)presence __attribute__((swift_name("init(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:presence:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (CybertronPresence_ * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CybertronBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CybertronLong * _Nullable)component8 __attribute__((swift_name("component8()")));
- (CybertronLong * _Nullable)component9 __attribute__((swift_name("component9()")));
- (CybertronUser_ *)doCopyId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount mutualFollowingCount:(CybertronLong * _Nullable)mutualFollowingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername presence:(CybertronPresence_ * _Nullable)presence __attribute__((swift_name("doCopy(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:presence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString * _Nullable bio __attribute__((swift_name("bio")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) CybertronLong * _Nullable followerCount __attribute__((swift_name("followerCount")));
@property (readonly) CybertronLong * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable instagramUrl __attribute__((swift_name("instagramUrl")));
@property (readonly) NSString * _Nullable instagramUsername __attribute__((swift_name("instagramUsername")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) CybertronLong * _Nullable mutualFollowingCount __attribute__((swift_name("mutualFollowingCount")));
@property (readonly) CybertronPresence_ * _Nullable presence __attribute__((swift_name("presence")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable twitterUrl __attribute__((swift_name("twitterUrl")));
@property (readonly) NSString * _Nullable twitterUsername __attribute__((swift_name("twitterUsername")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@property (readonly) CybertronBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_.Adapter")))
@interface CybertronUser_Adapter : CybertronBase
- (instancetype)initWithTagsAdapter:(id<CybertronRuntimeColumnAdapter>)tagsAdapter presenceAdapter:(id<CybertronRuntimeColumnAdapter>)presenceAdapter __attribute__((swift_name("init(tagsAdapter:presenceAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronRuntimeColumnAdapter> presenceAdapter __attribute__((swift_name("presenceAdapter")));
@property (readonly) id<CybertronRuntimeColumnAdapter> tagsAdapter __attribute__((swift_name("tagsAdapter")));
@end;

__attribute__((swift_name("UserQueries")))
@protocol CybertronUserQueries <CybertronRuntimeTransacter>
@required
- (void)createOrUpdateId:(NSString *)id bio:(NSString * _Nullable)bio firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName username:(NSString * _Nullable)username verified:(CybertronBoolean * _Nullable)verified avatarUrl:(NSString * _Nullable)avatarUrl followerCount:(CybertronLong * _Nullable)followerCount followingCount:(CybertronLong * _Nullable)followingCount mutualFollowingCount:(CybertronLong * _Nullable)mutualFollowingCount tags:(NSArray<NSString *> *)tags twitterUrl:(NSString * _Nullable)twitterUrl twitterUsername:(NSString * _Nullable)twitterUsername instagramUrl:(NSString * _Nullable)instagramUrl instagramUsername:(NSString * _Nullable)instagramUsername presence:(CybertronPresence_ * _Nullable)presence __attribute__((swift_name("createOrUpdate(id:bio:firstName:lastName:username:verified:avatarUrl:followerCount:followingCount:mutualFollowingCount:tags:twitterUrl:twitterUsername:instagramUrl:instagramUsername:presence:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinQualifiers")))
@interface CybertronKoinQualifiers : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koinQualifiers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKoinQualifiers *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANONYMOUS_ID __attribute__((swift_name("ANONYMOUS_ID")));
@property (readonly) NSString *APP_VERSION_NAME __attribute__((swift_name("APP_VERSION_NAME")));
@property (readonly) NSString *DEVICE_ID __attribute__((swift_name("DEVICE_ID")));
@property (readonly) NSString *FINAL_ORDER_URL __attribute__((swift_name("FINAL_ORDER_URL")));
@property (readonly) NSString *HTTP_CLIENT_V3 __attribute__((swift_name("HTTP_CLIENT_V3")));
@property (readonly) NSString *PALPATINE_URL __attribute__((swift_name("PALPATINE_URL")));
@end;

__attribute__((swift_name("KoruScopeProvider")))
@protocol CybertronKoruScopeProvider
@required
@property (readonly) id<CybertronKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainScopeProvider")))
@interface CybertronMainScopeProvider : CybertronBase <CybertronKoruScopeProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<CybertronKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol CybertronRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallAdapter")))
@interface CybertronCallAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronCall *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(CybertronCall *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantAdapter")))
@interface CybertronInstantAdapter : CybertronBase <CybertronRuntimeColumnAdapter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronKotlinx_datetimeInstant *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(CybertronKotlinx_datetimeInstant *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageFlagAdapter")))
@interface CybertronMessageFlagAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<CybertronMessageFlag *> *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(NSArray<CybertronMessageFlag *> *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageReactionAdapter")))
@interface CybertronMessageReactionAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<CybertronReaction *> *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(NSArray<CybertronReaction *> *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionsAdapters")))
@interface CybertronPermissionsAdapters : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronPermissions *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(CybertronPermissions *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenceAdapter")))
@interface CybertronPresenceAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronPresence_ *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(CybertronPresence_ *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringListAdapter")))
@interface CybertronStringListAdapter : CybertronBase <CybertronRuntimeColumnAdapter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<NSString *> *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(NSArray<NSString *> *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurveyOptionsAdapter")))
@interface CybertronSurveyOptionsAdapter : CybertronBase <CybertronRuntimeColumnAdapter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<CybertronSurveyOption *> *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(NSArray<CybertronSurveyOption *> *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAdapter")))
@interface CybertronUserAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronUser_ *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(CybertronUser_ *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserListAdapter")))
@interface CybertronUserListAdapter : CybertronBase <CybertronRuntimeColumnAdapter, CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<CybertronUser_ *> *)decodeDatabaseValue:(NSString *)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (NSString *)encodeValue:(NSArray<CybertronUser_ *> *)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAuthJwtDecoder")))
@interface CybertronMediaAuthJwtDecoder : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mediaAuthJwtDecoder __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMediaAuthJwtDecoder *shared __attribute__((swift_name("shared")));
- (CybertronMediaAuthJwtDecoderJwt * _Nullable)parseToken:(NSString * _Nullable)token __attribute__((swift_name("parse(token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAuthJwtDecoder.Jwt")))
@interface CybertronMediaAuthJwtDecoderJwt : CybertronBase
- (instancetype)initWithHeader:(NSString *)header body:(NSString *)body __attribute__((swift_name("init(header:body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserSurrogate")))
@interface CybertronUserSurrogate : CybertronBase <CybertronKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userSurrogate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserSurrogate *shared __attribute__((swift_name("shared")));
- (CybertronUser_ *)deserializeDecoder:(id<CybertronKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<CybertronKotlinx_serialization_coreEncoder>)encoder value:(CybertronUser_ *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CybertronKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataValidator")))
@interface CybertronLoginDataValidator : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronLoginDataValidatorCompanion *companion __attribute__((swift_name("companion")));
- (CybertronLoginDataValidatorResult *)checkPasswordPassword:(NSString *)password __attribute__((swift_name("checkPassword(password:)")));
- (CybertronLoginDataValidatorResult *)checkUsernameUsername:(NSString *)username __attribute__((swift_name("checkUsername(username:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataValidator.Companion")))
@interface CybertronLoginDataValidatorCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronLoginDataValidatorCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("LoginDataValidator.Result")))
@interface CybertronLoginDataValidatorResult : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataValidator.ResultError")))
@interface CybertronLoginDataValidatorResultError : CybertronLoginDataValidatorResult
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataValidator.ResultSuccess")))
@interface CybertronLoginDataValidatorResultSuccess : CybertronLoginDataValidatorResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronLoginDataValidatorResultSuccess *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteLogger")))
@interface CybertronRemoteLogger : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setCustomKeyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setCustomKey(key:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface CybertronFlowWrapper<T> : CybertronBase
- (instancetype)initWithFlow:(id<CybertronKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (id<CybertronKotlinx_coroutines_coreJob>)subscribeScope:(id<CybertronKotlinx_coroutines_coreCoroutineScope>)scope onEach:(void (^)(T _Nullable))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(CybertronKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(scope:onEach:onComplete:onThrow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomJsonFeature")))
@interface CybertronCustomJsonFeature : CybertronBase
- (instancetype)initWithSerializer:(id<CybertronKtor_client_jsonJsonSerializer>)serializer __attribute__((swift_name("init(serializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Install feature properly instead of direct instantiation.")));
@property (class, readonly, getter=companion) CybertronCustomJsonFeatureFeature *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<CybertronKtor_httpContentType *> *acceptContentTypes __attribute__((swift_name("acceptContentTypes")));
@property (readonly) id<CybertronKtor_client_jsonJsonSerializer> serializer __attribute__((swift_name("serializer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomJsonFeature.Config")))
@interface CybertronCustomJsonFeatureConfig : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)acceptContentTypes:(CybertronKotlinArray<CybertronKtor_httpContentType *> *)contentTypes __attribute__((swift_name("accept(contentTypes:)")));
- (void)receiveMatcher:(id<CybertronKtor_httpContentTypeMatcher>)matcher __attribute__((swift_name("receive(matcher:)")));
@property NSArray<CybertronKtor_httpContentType *> *acceptContentTypes __attribute__((swift_name("acceptContentTypes")));
@property NSArray<id<CybertronKtor_httpContentTypeMatcher>> *receiveContentTypeMatchers __attribute__((swift_name("receiveContentTypeMatchers")));
@property id<CybertronKtor_client_jsonJsonSerializer> _Nullable serializer __attribute__((swift_name("serializer")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol CybertronKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(CybertronKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CybertronKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomJsonFeature.Feature")))
@interface CybertronCustomJsonFeatureFeature : CybertronBase <CybertronKtor_client_coreHttpClientFeature>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)feature __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronCustomJsonFeatureFeature *shared __attribute__((swift_name("shared")));
- (void)installFeature:(CybertronCustomJsonFeature *)feature scope:(CybertronKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (CybertronCustomJsonFeature *)prepareBlock:(void (^)(CybertronCustomJsonFeatureConfig *))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CybertronKtor_utilsAttributeKey<CybertronCustomJsonFeature *> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Resource")))
@interface CybertronResource<__covariant T> : CybertronBase
- (instancetype)initWithStatus:(CybertronStatus *)status data:(T _Nullable)data message:(CybertronKotlinThrowable * _Nullable)message __attribute__((swift_name("init(status:data:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronResourceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) CybertronKotlinThrowable * _Nullable message __attribute__((swift_name("message")));
@property (readonly) CybertronStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResource")))
@interface CybertronPaginatedResource<__covariant T> : CybertronResource<T>
- (instancetype)initWithStatus:(CybertronStatus *)status data:(T _Nullable)data message:(CybertronKotlinThrowable * _Nullable)message hasLoadedAll:(BOOL)hasLoadedAll onNext:(id<CybertronKotlinSuspendFunction0> _Nullable)onNext onPrevious:(id<CybertronKotlinSuspendFunction0> _Nullable)onPrevious __attribute__((swift_name("init(status:data:message:hasLoadedAll:onNext:onPrevious:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStatus:(CybertronStatus *)status data:(id _Nullable)data message:(CybertronKotlinThrowable * _Nullable)message __attribute__((swift_name("init(status:data:message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronPaginatedResourceCompanion *companion __attribute__((swift_name("companion")));
- (CybertronStatus *)component1 __attribute__((swift_name("component1()")));
- (T _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinThrowable * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (id<CybertronKotlinSuspendFunction0> _Nullable)component5 __attribute__((swift_name("component5()")));
- (id<CybertronKotlinSuspendFunction0> _Nullable)component6 __attribute__((swift_name("component6()")));
- (CybertronPaginatedResource<T> *)doCopyStatus:(CybertronStatus *)status data:(T _Nullable)data message:(CybertronKotlinThrowable * _Nullable)message hasLoadedAll:(BOOL)hasLoadedAll onNext:(id<CybertronKotlinSuspendFunction0> _Nullable)onNext onPrevious:(id<CybertronKotlinSuspendFunction0> _Nullable)onPrevious __attribute__((swift_name("doCopy(status:data:message:hasLoadedAll:onNext:onPrevious:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) BOOL hasLoadedAll __attribute__((swift_name("hasLoadedAll")));
@property (readonly) CybertronKotlinThrowable * _Nullable message __attribute__((swift_name("message")));
@property (readonly) id<CybertronKotlinSuspendFunction0> _Nullable onNext __attribute__((swift_name("onNext")));
@property (readonly) id<CybertronKotlinSuspendFunction0> _Nullable onPrevious __attribute__((swift_name("onPrevious")));
@property (readonly) CybertronStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResourceCompanion")))
@interface CybertronPaginatedResourceCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronPaginatedResourceCompanion *shared __attribute__((swift_name("shared")));
- (CybertronPaginatedResource<id> *)errorThrowable:(CybertronKotlinThrowable *)throwable data:(id _Nullable)data __attribute__((swift_name("error(throwable:data:)")));
- (CybertronPaginatedResource<id> *)loadingData:(id _Nullable)data __attribute__((swift_name("loading(data:)")));
- (CybertronPaginatedResource<id> *)paginatingData:(id _Nullable)data __attribute__((swift_name("paginating(data:)")));
- (CybertronPaginatedResource<id> *)successData:(id _Nullable)data hasLoadedAll:(BOOL)hasLoadedAll onNext:(id<CybertronKotlinSuspendFunction0> _Nullable)onNext onPrevious:(id<CybertronKotlinSuspendFunction0> _Nullable)onPrevious __attribute__((swift_name("success(data:hasLoadedAll:onNext:onPrevious:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceCompanion")))
@interface CybertronResourceCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronResourceCompanion *shared __attribute__((swift_name("shared")));
- (CybertronResource<id> *)errorThrowable:(CybertronKotlinThrowable *)throwable data:(id _Nullable)data __attribute__((swift_name("error(throwable:data:)")));
- (CybertronResource<id> *)loadingData:(id _Nullable)data __attribute__((swift_name("loading(data:)")));
- (CybertronResource<id> *)successData:(id _Nullable)data __attribute__((swift_name("success(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface CybertronStatus : CybertronKotlinEnum<CybertronStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronStatus *success __attribute__((swift_name("success")));
@property (class, readonly) CybertronStatus *error __attribute__((swift_name("error")));
@property (class, readonly) CybertronStatus *loading __attribute__((swift_name("loading")));
@property (class, readonly) CybertronStatus *paginating __attribute__((swift_name("paginating")));
+ (CybertronKotlinArray<CybertronStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuddyListRepository")))
@interface CybertronBuddyListRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getBuddiesAll __attribute__((swift_name("getBuddiesAll()")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getBuddiesMutual __attribute__((swift_name("getBuddiesMutual()")));
- (id<CybertronKotlinx_coroutines_coreFlow>)searchFollowsSearchTerm:(NSString *)searchTerm __attribute__((swift_name("searchFollows(searchTerm:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRepository")))
@interface CybertronLoginRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)getToken __attribute__((swift_name("getToken()")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (id<CybertronKotlinx_coroutines_coreFlow>)loginPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("login(phoneNumber:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)loginPhoneNumber:(NSString *)phoneNumber code:(NSString *)code __attribute__((swift_name("login(phoneNumber:code:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)loginWithTokenToken:(NSString *)token phoneNumber:(NSString *)phoneNumber __attribute__((swift_name("loginWithToken(token:phoneNumber:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)loginWithTokenToken:(NSString *)token phoneNumber:(NSString *)phoneNumber code:(NSString *)code __attribute__((swift_name("loginWithToken(token:phoneNumber:code:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreCoroutineScope> iosScope __attribute__((swift_name("iosScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRepository")))
@interface CybertronMediaRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronMediaRepositoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> bixbyAllocation __attribute__((swift_name("bixbyAllocation")));
@property (readonly) int32_t currentPixelsLimit __attribute__((swift_name("currentPixelsLimit")));
@property (readonly) CybertronKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@property (readonly) int32_t maxStreamDegradedVideoThreshold __attribute__((swift_name("maxStreamDegradedVideoThreshold")));
@property (readonly) int32_t publishBitrateLimit __attribute__((swift_name("publishBitrateLimit")));
@property (readonly) int32_t publishFrameRateLimit __attribute__((swift_name("publishFrameRateLimit")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> publishState __attribute__((swift_name("publishState")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> publishStream __attribute__((swift_name("publishStream")));
@property (readonly) int64_t rtcEventLogDuration __attribute__((swift_name("rtcEventLogDuration")));
@property (readonly) BOOL streamDebugEnabled __attribute__((swift_name("streamDebugEnabled")));
@property (readonly) int32_t streamMaxRetries __attribute__((swift_name("streamMaxRetries")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> streamTokens __attribute__((swift_name("streamTokens")));
@property (readonly) int32_t subscribeBitrateLimit __attribute__((swift_name("subscribeBitrateLimit")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> subscriptionStreams __attribute__((swift_name("subscriptionStreams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaRepository.Companion")))
@interface CybertronMediaRepositoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronMediaRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BITRATE_LIMIT_NONE __attribute__((swift_name("BITRATE_LIMIT_NONE")));
@property (readonly) NSString *DEFAULT_BIXBY_HOST __attribute__((swift_name("DEFAULT_BIXBY_HOST")));
@property (readonly) NSString *LIST_STREAMS_OPERATION __attribute__((swift_name("LIST_STREAMS_OPERATION")));
@property (readonly) int32_t PUBLISH_BITRATE_LIMIT_CONSERVE_DATA __attribute__((swift_name("PUBLISH_BITRATE_LIMIT_CONSERVE_DATA")));
@property (readonly) int32_t PUBLISH_FRAMERATE __attribute__((swift_name("PUBLISH_FRAMERATE")));
@property (readonly) int32_t PUBLISH_PIXELS_INITIAL __attribute__((swift_name("PUBLISH_PIXELS_INITIAL")));
@property (readonly) int32_t PUBLISH_PIXELS_LIMIT __attribute__((swift_name("PUBLISH_PIXELS_LIMIT")));
@property (readonly) int32_t PUBLISH_PIXELS_LIMIT_CONSERVE_DATA __attribute__((swift_name("PUBLISH_PIXELS_LIMIT_CONSERVE_DATA")));
@property (readonly) int32_t PUBLISH_STREAM_DEGRADED_VIDEO_THRESHOLD __attribute__((swift_name("PUBLISH_STREAM_DEGRADED_VIDEO_THRESHOLD")));
@property (readonly) int32_t STREAM_MAX_RETRIES __attribute__((swift_name("STREAM_MAX_RETRIES")));
@property (readonly) int32_t SUBSCRIBE_BITRATE_LIMIT_CONSERVE_DATA __attribute__((swift_name("SUBSCRIBE_BITRATE_LIMIT_CONSERVE_DATA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageRepository")))
@interface CybertronMessageRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<CybertronKotlinx_coroutines_coreFlow>)deleteMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("deleteMessage(roomId:messageId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)deleteMessagesRoomId:(NSString *)roomId __attribute__((swift_name("deleteMessages(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)editMessageText:(NSString *)text roomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("editMessage(text:roomId:messageId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)flagMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId flagBody:(CybertronFlagBody *)flagBody __attribute__((swift_name("flagMessage(roomId:messageId:flagBody:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("getMessage(roomId:messageId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMessagesRoomId:(NSString *)roomId startTime:(int64_t)startTime __attribute__((swift_name("getRoomMessages(roomId:startTime:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getUserLikesListRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("getUserLikesList(roomId:messageId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)postMessageMessage:(CybertronMessage *)message roomId:(NSString *)roomId __attribute__((swift_name("postMessage(message:roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)saveMessageRoomId:(NSString *)roomId messageId:(NSString *)messageId __attribute__((swift_name("saveMessage(roomId:messageId:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> intervalMessages __attribute__((swift_name("intervalMessages")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> isMessageSaved __attribute__((swift_name("isMessageSaved")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomRepository")))
@interface CybertronRoomRepository : CybertronBase
@property (class, readonly, getter=companion) CybertronRoomRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (id<CybertronKotlinx_coroutines_coreFlow>)acceptOthersRequestToJoinRoomRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("acceptOthersRequestToJoinRoom(roomId:userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)acceptSelfRequestToJoinRoomId:(NSString *)roomId __attribute__((swift_name("acceptSelfRequestToJoin(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)addOrInviteUserToRoomRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("addOrInviteUserToRoom(roomId:userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)cancelInviteForUserRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("cancelInviteForUser(roomId:userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)declineSelfRequestToJoinRoomId:(NSString *)roomId __attribute__((swift_name("declineSelfRequestToJoin(roomId:)")));
- (void)enterRoomRoomId:(NSString *)roomId __attribute__((swift_name("enterRoom(roomId:)")));
- (void)exitRoomRoomId:(NSString *)roomId __attribute__((swift_name("exitRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getLiveRoomsPageLimit:(int32_t)pageLimit __attribute__((swift_name("getLiveRooms(pageLimit:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getMyRoomsPageLimit:(int32_t)pageLimit __attribute__((swift_name("getMyRooms(pageLimit:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomRoomId:(NSString *)roomId __attribute__((swift_name("getRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMemberRoomId:(NSString *)roomId userId:(NSString *)userId __attribute__((swift_name("getRoomMember(roomId:userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomMembersRoomId:(NSString *)roomId roleStatePair:(CybertronKotlinPair<CybertronMembershipRole *, CybertronMembershipState *> * _Nullable)roleStatePair includePresence:(BOOL)includePresence pageLimit:(int32_t)pageLimit __attribute__((swift_name("getRoomMembers(roomId:roleStatePair:includePresence:pageLimit:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)joinRoomRoomId:(NSString *)roomId __attribute__((swift_name("joinRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)leaveRoomRoomId:(NSString *)roomId __attribute__((swift_name("leaveRoom(roomId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)removeOtherOrDeclineOthersRequestToJoinRoomRoomId:(NSString *)roomId userId:(NSString *)userId actionDurationPair:(CybertronKotlinPair<CybertronRemoveAction *, CybertronBanDuration *> * _Nullable)actionDurationPair __attribute__((swift_name("removeOtherOrDeclineOthersRequestToJoinRoom(roomId:userId:actionDurationPair:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)updateMembershipRoleRoomId:(NSString *)roomId member:(CybertronMember *)member newRole:(CybertronMembershipRole *)newRole __attribute__((swift_name("updateMembershipRole(roomId:member:newRole:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)updateRoomEditedRoom:(CybertronRoom *)editedRoom __attribute__((swift_name("updateRoom(editedRoom:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> currentRoom __attribute__((swift_name("currentRoom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomRepository.Companion")))
@interface CybertronRoomRepositoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronRoomRepositoryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelfRepository")))
@interface CybertronSelfRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)getId __attribute__((swift_name("getId()")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getSelfProfileToken:(NSString * _Nullable)token __attribute__((swift_name("getSelfProfile(token:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSessionToken:(NSString *)token completionHandler:(void (^)(CybertronResource<CybertronSessionUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSession(token:completionHandler:)")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRepository")))
@interface CybertronUserRepository : CybertronBase <CybertronKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronUserRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (id<CybertronKotlinx_coroutines_coreFlow>)blockUserUserId:(NSString *)userId reason:(NSString *)reason __attribute__((swift_name("blockUser(userId:reason:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)fetchBlockedUsers __attribute__((swift_name("fetchBlockedUsers()")));
- (id<CybertronKotlinx_coroutines_coreFlow>)followUserUserId:(NSString *)userId __attribute__((swift_name("followUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getHostedRoomsForUserUserId:(NSString *)userId __attribute__((swift_name("getHostedRoomsForUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getRoomsForUserUserId:(NSString *)userId __attribute__((swift_name("getRoomsForUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)getUserUserId:(NSString *)userId __attribute__((swift_name("getUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)reportUserFromRoomUserId:(NSString *)userId roomId:(NSString *)roomId flagBody:(CybertronFlagBody *)flagBody __attribute__((swift_name("reportUserFromRoom(userId:roomId:flagBody:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)unblockUserUserId:(NSString *)userId __attribute__((swift_name("unblockUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)unfollowUserUserId:(NSString *)userId __attribute__((swift_name("unfollowUser(userId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)updateUserInstagramIdInstaId:(NSString *)instaId __attribute__((swift_name("updateUserInstagramId(instaId:)")));
- (id<CybertronKotlinx_coroutines_coreFlow>)updateUserTwitterIdTwitterId:(NSString *)twitterId __attribute__((swift_name("updateUserTwitterId(twitterId:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreStateFlow> blockedUsers __attribute__((swift_name("blockedUsers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRepository.Companion")))
@interface CybertronUserRepositoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronUserRepositoryCompanion *shared __attribute__((swift_name("shared")));
@end;

@interface CybertronMember (Extensions)
- (BOOL)hasRoomPermissionPermissionState:(CybertronPermissionState *)permissionState __attribute__((swift_name("hasRoomPermission(permissionState:)")));
@end;

@interface CybertronRoom (Extensions)
- (BOOL)hasSelfRoomPermissionPermissionState:(CybertronPermissionState *)permissionState __attribute__((swift_name("hasSelfRoomPermission(permissionState:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CybertronKtor_client_coreHttpClientConfig<T> : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CybertronKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<CybertronKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(CybertronKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CybertronKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

@interface CybertronKtor_client_coreHttpClientConfig (Extensions)
- (void)JsonBlock:(void (^)(CybertronCustomJsonFeatureConfig *))block __attribute__((swift_name("Json(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedResultsKt")))
@interface CybertronPaginatedResultsKt : CybertronBase
@property (class, readonly) int32_t PAGINATION_DEFAULT_LIMIT __attribute__((swift_name("PAGINATION_DEFAULT_LIMIT")));
@property (class, readonly) NSDictionary<NSString *, NSString *> *PAGINATION_DEFAULT_MAP __attribute__((swift_name("PAGINATION_DEFAULT_MAP")));
@property (class, readonly) NSString *PAGINATION_KEY_LIMIT __attribute__((swift_name("PAGINATION_KEY_LIMIT")));
@property (class, readonly) NSString *PAGINATION_KEY_SKIP __attribute__((swift_name("PAGINATION_KEY_SKIP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuddyKt")))
@interface CybertronBuddyKt : CybertronBase
@property (class, readonly) NSString *FOLLOW_STATE_MUTUAL __attribute__((swift_name("FOLLOW_STATE_MUTUAL")));
@property (class, readonly) NSString *OFFLINE __attribute__((swift_name("OFFLINE")));
@property (class, readonly) NSString *ONLINE __attribute__((swift_name("ONLINE")));
@property (class, readonly) NSString *FOLLOW_STATE_MUTUAL_ __attribute__((swift_name("FOLLOW_STATE_MUTUAL_")));
@property (class, readonly) NSString *OFFLINE_ __attribute__((swift_name("OFFLINE_")));
@property (class, readonly) NSString *ONLINE_ __attribute__((swift_name("ONLINE_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaModuleKt")))
@interface CybertronMediaModuleKt : CybertronBase
+ (CybertronKoin_coreModule *)mediaModule __attribute__((swift_name("mediaModule()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsKt")))
@interface CybertronSettingsKt : CybertronBase
+ (int64_t)getRtcEventLogDurationMillis:(id<CybertronMultiplatform_settingsSettings>)receiver __attribute__((swift_name("getRtcEventLogDurationMillis(_:)")));
+ (BOOL)isConserveDataModeEnabled:(id<CybertronMultiplatform_settingsSettings>)receiver __attribute__((swift_name("isConserveDataModeEnabled(_:)")));
+ (BOOL)isStreamDebugEnabled:(id<CybertronMultiplatform_settingsSettings>)receiver __attribute__((swift_name("isStreamDebugEnabled(_:)")));
+ (void)setConserveDataModeEnabled:(id<CybertronMultiplatform_settingsSettings>)receiver enabled:(BOOL)enabled __attribute__((swift_name("setConserveDataModeEnabled(_:enabled:)")));
+ (void)setRtcEventLogDuration:(id<CybertronMultiplatform_settingsSettings>)receiver durationMillis:(int64_t)durationMillis __attribute__((swift_name("setRtcEventLogDuration(_:durationMillis:)")));
+ (void)setStreamDebugEnabled:(id<CybertronMultiplatform_settingsSettings>)receiver enabled:(BOOL)enabled __attribute__((swift_name("setStreamDebugEnabled(_:enabled:)")));
@property (class, readonly) NSString *SETTINGS_CONSERVE_DATA_MODE_ENABLED __attribute__((swift_name("SETTINGS_CONSERVE_DATA_MODE_ENABLED")));
@property (class, readonly) NSString *SETTINGS_RTC_EVENT_LOG_DURATION __attribute__((swift_name("SETTINGS_RTC_EVENT_LOG_DURATION")));
@property (class, readonly) NSString *SETTINGS_STREAM_DEBUG_ENABLED __attribute__((swift_name("SETTINGS_STREAM_DEBUG_ENABLED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDecoderKt")))
@interface CybertronCompositeDecoderKt : CybertronBase
+ (id _Nullable)decodeSerializableElement:(id<CybertronKotlinx_serialization_coreCompositeDecoder>)receiver descriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer fallbackValue:(id _Nullable)fallbackValue previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(_:descriptor:index:deserializer:fallbackValue:previousValue:)")));
+ (NSString * _Nullable)decodeStringElement:(id<CybertronKotlinx_serialization_coreCompositeDecoder>)receiver descriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index fallbackValue:(NSString * _Nullable)fallbackValue __attribute__((swift_name("decodeStringElement(_:descriptor:index:fallbackValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface CybertronPlatformKt : CybertronBase
+ (id<CybertronPrimusDatabase>)getDatabaseSqlDriver:(id<CybertronRuntimeSqlDriver>)sqlDriver __attribute__((swift_name("getDatabase(sqlDriver:)")));
+ (CybertronKtor_client_coreHttpClient *)getHttpClientConfig:(void (^)(CybertronKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("getHttpClient(config:)")));
+ (CybertronLong * _Nullable)parseCustomFinalOrderTimestampTimestamp:(NSString *)timestamp __attribute__((swift_name("parseCustomFinalOrderTimestamp(timestamp:)")));
+ (CybertronKoin_coreModule *)platformModuleAppVersionName:(NSString *)appVersionName deviceId:(NSString *)deviceId anonymousId:(NSString *)anonymousId __attribute__((swift_name("platformModule(appVersionName:deviceId:anonymousId:)")));
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
+ (NSString *)userAgentAppVersionName:(NSString *)appVersionName __attribute__((swift_name("userAgent(appVersionName:)")));
@property (class, readonly) BOOL enableDebugLogs __attribute__((swift_name("enableDebugLogs")));
@property (class, readonly) BOOL enableNetworkLogs __attribute__((swift_name("enableNetworkLogs")));
@property (class, readonly) CybertronMember_Adapter *memberAdapter __attribute__((swift_name("memberAdapter")));
@property (class, readonly) CybertronMessage_Adapter *messageAdapter __attribute__((swift_name("messageAdapter")));
@property (class, readonly) CybertronPresence___Adapter *presenceAdapter __attribute__((swift_name("presenceAdapter")));
@property (class, readonly) CybertronRoom_Adapter *roomAdapter __attribute__((swift_name("roomAdapter")));
@property (class, readonly) CybertronSessionAdapter *sessionAdapter __attribute__((swift_name("sessionAdapter")));
@property (class, readonly) CybertronUser_Adapter *userAdapter __attribute__((swift_name("userAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface CybertronKoinKt : CybertronBase
+ (CybertronKoin_coreModule *)commonModuleAppVersionName:(NSString *)appVersionName anonymousId:(NSString *)anonymousId deviceId:(NSString *)deviceId enableNetworkLogs:(BOOL)enableNetworkLogs palpatineServerUrl:(NSString *)palpatineServerUrl finalOrderServerUrl:(NSString *)finalOrderServerUrl __attribute__((swift_name("commonModule(appVersionName:anonymousId:deviceId:enableNetworkLogs:palpatineServerUrl:finalOrderServerUrl:)")));
+ (CybertronKtor_client_coreHttpClient *)createHttpClientLoginRepository:(CybertronLoginRepository *)loginRepository json:(CybertronKotlinx_serialization_jsonJson *)json appVersionName:(NSString *)appVersionName enableNetworkLogs:(BOOL)enableNetworkLogs __attribute__((swift_name("createHttpClient(loginRepository:json:appVersionName:enableNetworkLogs:)")));
+ (CybertronKotlinx_serialization_jsonJson *)createJson __attribute__((swift_name("createJson()")));
+ (CybertronKtor_client_coreHttpClient *)createV3ClientLoginRepository:(CybertronLoginRepository *)loginRepository json:(CybertronKotlinx_serialization_jsonJson *)json appVersionName:(NSString *)appVersionName enableNetworkLogs:(BOOL)enableNetworkLogs __attribute__((swift_name("createV3Client(loginRepository:json:appVersionName:enableNetworkLogs:)")));
+ (CybertronKoin_coreKoinApplication *)doInitKoin __attribute__((swift_name("doInitKoin()")));
+ (CybertronKoin_coreKoinApplication *)doInitKoinAppVersionName:(NSString *)appVersionName deviceId:(NSString *)deviceId anonymousId:(NSString *)anonymousId enableNetworkLogs:(BOOL)enableNetworkLogs palpatineServerUrl:(NSString *)palpatineServerUrl finalOrderServerUrl:(NSString *)finalOrderServerUrl appDeclaration:(void (^)(CybertronKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appVersionName:deviceId:anonymousId:enableNetworkLogs:palpatineServerUrl:finalOrderServerUrl:appDeclaration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkBoundResourceKt")))
@interface CybertronNetworkBoundResourceKt : CybertronBase
+ (id<CybertronKotlinx_coroutines_coreFlow>)networkBoundResourceQuery:(id<CybertronKotlinx_coroutines_coreFlow> (^)(void))query fetch:(id<CybertronKotlinSuspendFunction0>)fetch saveFetchResult:(id<CybertronKotlinSuspendFunction1>)saveFetchResult onFetchFailed:(void (^)(CybertronKotlinThrowable *))onFetchFailed shouldFetch:(CybertronBoolean *(^)(id _Nullable))shouldFetch __attribute__((swift_name("networkBoundResource(query:fetch:saveFetchResult:onFetchFailed:shouldFetch:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CybertronKotlinEnumCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CybertronKotlinArray<T> : CybertronBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CybertronInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CybertronKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface CybertronKotlinx_datetimeInstant : CybertronBase <CybertronKotlinComparable>
@property (class, readonly, getter=companion) CybertronKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CybertronKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CybertronKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(CybertronKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (CybertronKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CybertronKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CybertronKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CybertronKotlinx_coroutines_coreSharedFlow <CybertronKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CybertronKotlinx_coroutines_coreStateFlow <CybertronKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface CybertronKoin_coreKoin : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (CybertronKoin_coreScope *)createScopeT:(id<CybertronKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (CybertronKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (CybertronKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (CybertronKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<CybertronKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CybertronKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<CybertronKotlinKClass>)clazz qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (CybertronKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (CybertronKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<CybertronKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<CybertronKotlinKClass>)clazz qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (CybertronKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (CybertronKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<CybertronKotlinLazy>)injectQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier mode:(CybertronKotlinLazyThreadSafetyMode *)mode parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CybertronKotlinLazy>)injectOrNullQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier mode:(CybertronKotlinLazyThreadSafetyMode *)mode parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<CybertronKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(CybertronKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) CybertronKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) CybertronKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) CybertronKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) CybertronKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CybertronKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CybertronKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol CybertronKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CybertronKtor_client_coreHttpClient : CybertronBase <CybertronKotlinx_coroutines_coreCoroutineScope, CybertronKtor_ioCloseable>
- (instancetype)initWithEngine:(id<CybertronKtor_client_coreHttpClientEngine>)engine userConfig:(CybertronKtor_client_coreHttpClientConfig<CybertronKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (CybertronKtor_client_coreHttpClient *)configBlock:(void (^)(CybertronKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(CybertronKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(CybertronKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<CybertronKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<CybertronKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) CybertronKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<CybertronKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) CybertronKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) CybertronKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) CybertronKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) CybertronKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) CybertronKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CybertronKotlinRuntimeException : CybertronKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CybertronKotlinIllegalStateException : CybertronKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CybertronKotlinCancellationException : CybertronKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CybertronKtor_httpHttpStatusCode : CybertronBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CybertronKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CybertronKotlinPair<__covariant A, __covariant B> : CybertronBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CybertronKotlinx_serialization_coreEncoder
@required
- (id<CybertronKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CybertronKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CybertronKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CybertronKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CybertronKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CybertronKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CybertronKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CybertronKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CybertronKotlinx_serialization_coreDecoder
@required
- (id<CybertronKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CybertronKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CybertronKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol CybertronRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol CybertronRuntimeTransactionWithoutReturn <CybertronRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<CybertronRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol CybertronRuntimeTransactionWithReturn <CybertronRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<CybertronRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol CybertronRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol CybertronRuntimeSqlDriver <CybertronRuntimeCloseable>
@required
- (CybertronRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(CybertronInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CybertronRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<CybertronRuntimeSqlCursor>)executeQueryIdentifier:(CybertronInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CybertronRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (CybertronRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol CybertronRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<CybertronRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<CybertronRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface CybertronRuntimeQuery<__covariant RowType> : CybertronBase
- (instancetype)initWithQueries:(NSMutableArray<CybertronRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<CybertronRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<CybertronRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<CybertronRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<CybertronRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<CybertronRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CybertronKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CybertronKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CybertronKotlinCoroutineContextElement> _Nullable)getKey:(id<CybertronKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CybertronKotlinCoroutineContext>)minusKeyKey:(id<CybertronKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CybertronKotlinCoroutineContext>)plusContext:(id<CybertronKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CybertronKotlinCoroutineContextElement <CybertronKotlinCoroutineContext>
@required
@property (readonly) id<CybertronKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CybertronKotlinx_coroutines_coreJob <CybertronKotlinCoroutineContextElement>
@required
- (id<CybertronKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CybertronKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CybertronKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (CybertronKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CybertronKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CybertronKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CybertronKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CybertronKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CybertronKotlinx_coroutines_coreJob>)plusOther:(id<CybertronKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CybertronKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CybertronKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Ktor_client_jsonJsonSerializer")))
@protocol CybertronKtor_client_jsonJsonSerializer
@required
- (id)readType:(CybertronKtor_client_coreTypeInfo *)type body:(id<CybertronKtor_ioInput>)body __attribute__((swift_name("read(type:body:)"))) __attribute__((deprecated("Please use overload with io.ktor.util.reflect.TypeInfo parameter")));
- (id)readType:(id<CybertronKtor_utilsTypeInfo>)type body_:(id<CybertronKtor_ioInput>)body __attribute__((swift_name("read(type:body_:)")));
- (CybertronKtor_httpOutgoingContent *)writeData:(id)data __attribute__((swift_name("write(data:)")));
- (CybertronKtor_httpOutgoingContent *)writeData:(id)data contentType:(CybertronKtor_httpContentType *)contentType __attribute__((swift_name("write(data:contentType:)")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CybertronKtor_httpHeaderValueWithParameters : CybertronBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CybertronKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CybertronKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CybertronKtor_httpContentType : CybertronKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CybertronKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CybertronKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CybertronKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CybertronKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CybertronKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Ktor_httpContentTypeMatcher")))
@protocol CybertronKtor_httpContentTypeMatcher
@required
- (BOOL)containsContentType:(CybertronKtor_httpContentType *)contentType __attribute__((swift_name("contains(contentType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CybertronKtor_utilsAttributeKey<T> : CybertronBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol CybertronKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CybertronKotlinSuspendFunction0 <CybertronKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol CybertronKotlinx_serialization_coreSerialFormat
@required
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol CybertronKotlinx_serialization_coreStringFormat <CybertronKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface CybertronKotlinx_serialization_jsonJson : CybertronBase <CybertronKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(CybertronKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(CybertronKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(CybertronKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (CybertronKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (CybertronKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) CybertronKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface CybertronKoin_coreModule : CybertronBase
- (instancetype)initWithCreatedAtStart:(BOOL)createdAtStart __attribute__((swift_name("init(createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (CybertronKotlinPair<CybertronKoin_coreModule *, CybertronKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSArray<CybertronKoin_coreModule *> *)plusModules:(NSArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<CybertronKoin_coreModule *> *)plusModule:(CybertronKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<CybertronKoin_coreQualifier>)qualifier scopeSet:(void (^)(CybertronKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(CybertronKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (CybertronKotlinPair<CybertronKoin_coreModule *, CybertronKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BOOL createdAtStart __attribute__((swift_name("createdAtStart")));
@property (readonly) CybertronMutableSet<CybertronKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol CybertronMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (CybertronBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (CybertronDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (CybertronFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (CybertronInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (CybertronLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CybertronKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CybertronKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CybertronKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface CybertronKoin_coreKoinApplication : CybertronBase
@property (class, readonly, getter=companion) CybertronKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (CybertronKoin_coreKoinApplication *)loggerLogger:(CybertronKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (CybertronKoin_coreKoinApplication *)modulesModules:(CybertronKotlinArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (CybertronKoin_coreKoinApplication *)modulesModules_:(NSArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (CybertronKoin_coreKoinApplication *)modulesModules__:(CybertronKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (CybertronKoin_coreKoinApplication *)printLoggerLevel:(CybertronKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (CybertronKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, NSString *> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(CybertronKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) CybertronKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CybertronKotlinSuspendFunction1 <CybertronKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CybertronKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface CybertronKotlinx_datetimeInstantCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (CybertronKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (CybertronKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (CybertronKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (CybertronKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) CybertronKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) CybertronKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CybertronKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CybertronKotlinUnit : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface CybertronKoin_coreScope : CybertronBase
- (instancetype)initWithScopeQualifier:(id<CybertronKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CybertronKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<CybertronKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (CybertronKoin_coreScope *)doCopyScopeQualifier:(id<CybertronKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CybertronKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CybertronKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<CybertronKotlinKClass>)clazz qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<CybertronKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (CybertronKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<CybertronKotlinKClass>)clazz qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (CybertronKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<CybertronKotlinLazy>)injectQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier mode:(CybertronKotlinLazyThreadSafetyMode *)mode parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CybertronKotlinLazy>)injectOrNullQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier mode:(CybertronKotlinLazyThreadSafetyMode *)mode parameters:(CybertronKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(CybertronKotlinArray<CybertronKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<CybertronKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(CybertronKotlinArray<CybertronKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<CybertronKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) CybertronKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<CybertronKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol CybertronKoin_coreKoinScopeComponent <CybertronKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) CybertronKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol CybertronKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CybertronKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CybertronKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CybertronKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CybertronKotlinKClass <CybertronKotlinKDeclarationContainer, CybertronKotlinKAnnotatedElement, CybertronKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface CybertronKoin_coreParametersHolder : CybertronBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<CybertronKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<CybertronKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (CybertronKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size_ __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol CybertronKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface CybertronKotlinLazyThreadSafetyMode : CybertronKotlinEnum<CybertronKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) CybertronKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) CybertronKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (CybertronKotlinArray<CybertronKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface CybertronKoin_coreLogger : CybertronBase
- (instancetype)initWithLevel:(CybertronKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(CybertronKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(CybertronKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(CybertronKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property CybertronKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface CybertronKoin_coreInstanceRegistry : CybertronBase
- (instancetype)initWith_koin:(CybertronKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(CybertronKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) CybertronKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, CybertronKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface CybertronKoin_corePropertyRegistry : CybertronBase
- (instancetype)initWith_koin:(CybertronKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface CybertronKoin_coreScopeRegistry : CybertronBase
- (instancetype)initWith_koin:(CybertronKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSArray<CybertronKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) CybertronKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<CybertronKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CybertronKtor_client_coreHttpClientEngine <CybertronKotlinx_coroutines_coreCoroutineScope, CybertronKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(CybertronKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(CybertronKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(CybertronKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) CybertronKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) CybertronKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<CybertronKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CybertronKtor_client_coreHttpClientEngineConfig : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property CybertronKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) CybertronKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol CybertronKtor_httpHttpMessageBuilder
@required
@property (readonly) CybertronKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface CybertronKtor_client_coreHttpRequestBuilder : CybertronBase <CybertronKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<CybertronKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<CybertronKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<CybertronKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (CybertronKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(CybertronKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (CybertronKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(CybertronKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(CybertronKtor_httpURLBuilder *, CybertronKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<CybertronKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) CybertronKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property CybertronKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CybertronKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CybertronKtor_client_coreHttpClientCall : CybertronBase <CybertronKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<CybertronKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(CybertronKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<CybertronKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CybertronKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<CybertronKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<CybertronKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) CybertronKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol CybertronKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CybertronKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CybertronKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CybertronKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey_:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key_:)")));
- (id)takeKey:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CybertronKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CybertronKotlinAbstractCoroutineContextElement : CybertronBase <CybertronKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CybertronKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CybertronKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CybertronKotlinContinuationInterceptor <CybertronKotlinCoroutineContextElement>
@required
- (id<CybertronKotlinContinuation>)interceptContinuationContinuation:(id<CybertronKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CybertronKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CybertronKotlinx_coroutines_coreCoroutineDispatcher : CybertronKotlinAbstractCoroutineContextElement <CybertronKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CybertronKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<CybertronKotlinCoroutineContext>)context block:(id<CybertronKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CybertronKotlinCoroutineContext>)context block:(id<CybertronKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CybertronKotlinContinuation>)interceptContinuationContinuation:(id<CybertronKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CybertronKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CybertronKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(CybertronKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CybertronKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CybertronKtor_utilsPipeline<TSubject, TContext> : CybertronBase
- (instancetype)initWithPhase:(CybertronKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CybertronKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CybertronKotlinArray<CybertronKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CybertronKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(CybertronKtor_utilsPipelinePhase *)reference phase:(CybertronKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CybertronKtor_utilsPipelinePhase *)reference phase:(CybertronKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CybertronKtor_utilsPipelinePhase *)phase block:(id<CybertronKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(CybertronKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<CybertronKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CybertronKtor_client_coreHttpReceivePipeline : CybertronKtor_utilsPipeline<CybertronKtor_client_coreHttpResponse *, CybertronKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CybertronKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CybertronKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CybertronKotlinArray<CybertronKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CybertronKtor_client_coreHttpRequestPipeline : CybertronKtor_utilsPipeline<id, CybertronKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CybertronKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CybertronKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CybertronKotlinArray<CybertronKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CybertronKtor_client_coreHttpResponsePipeline : CybertronKtor_utilsPipeline<CybertronKtor_client_coreHttpResponseContainer *, CybertronKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CybertronKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CybertronKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CybertronKotlinArray<CybertronKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CybertronKtor_client_coreHttpSendPipeline : CybertronKtor_utilsPipeline<id, CybertronKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CybertronKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CybertronKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CybertronKotlinArray<CybertronKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface CybertronKtor_httpHttpStatusCodeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) CybertronKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) CybertronKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) CybertronKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) CybertronKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) CybertronKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) CybertronKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) CybertronKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) CybertronKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) CybertronKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) CybertronKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) CybertronKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) CybertronKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) CybertronKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) CybertronKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) CybertronKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) CybertronKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) CybertronKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) CybertronKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) CybertronKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) CybertronKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) CybertronKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) CybertronKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) CybertronKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) CybertronKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) CybertronKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) CybertronKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) CybertronKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) CybertronKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) CybertronKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) CybertronKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) CybertronKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) CybertronKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) CybertronKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) CybertronKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) CybertronKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) CybertronKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) CybertronKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) CybertronKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<CybertronKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CybertronKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CybertronKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CybertronKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CybertronKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CybertronKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CybertronKotlinx_serialization_coreSerializersModule : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<CybertronKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CybertronKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CybertronKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CybertronKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<CybertronKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CybertronKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CybertronKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CybertronKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CybertronKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CybertronKotlinx_serialization_coreSerialKind : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CybertronKotlinNothing : CybertronBase
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface CybertronRuntimeTransacterTransaction : CybertronBase <CybertronRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) CybertronRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol CybertronRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(CybertronKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(CybertronDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(CybertronLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol CybertronRuntimeSqlCursor <CybertronRuntimeCloseable>
@required
- (CybertronKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (CybertronDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (CybertronLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol CybertronRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CybertronKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CybertronKotlinx_coroutines_coreChildHandle <CybertronKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(CybertronKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<CybertronKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CybertronKotlinx_coroutines_coreChildJob <CybertronKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<CybertronKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol CybertronKotlinSequence
@required
- (id<CybertronKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CybertronKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<CybertronKotlinx_coroutines_coreSelectInstance>)select block:(id<CybertronKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CybertronKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol CybertronKtor_utilsTypeInfo
@required
@property (readonly) id<CybertronKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CybertronKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<CybertronKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface CybertronKtor_client_coreTypeInfo : CybertronBase <CybertronKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<CybertronKotlinKClass>)type reifiedType:(id<CybertronKotlinKType>)reifiedType kotlinType:(id<CybertronKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<CybertronKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<CybertronKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<CybertronKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (CybertronKtor_client_coreTypeInfo *)doCopyType:(id<CybertronKotlinKClass>)type reifiedType:(id<CybertronKotlinKType>)reifiedType kotlinType:(id<CybertronKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CybertronKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CybertronKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<CybertronKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol CybertronKtor_ioInput <CybertronKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(CybertronKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property CybertronKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CybertronKtor_httpOutgoingContent : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(CybertronKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CybertronKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) CybertronLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) CybertronKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<CybertronKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CybertronKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CybertronKtor_httpHeaderValueParam : CybertronBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CybertronKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface CybertronKtor_httpHeaderValueWithParametersCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<CybertronKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface CybertronKtor_httpContentTypeCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CybertronKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface CybertronKotlinx_serialization_jsonJsonConfiguration : CybertronBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface CybertronKotlinx_serialization_jsonJsonDefault : CybertronKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(CybertronKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(CybertronKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CybertronKotlinx_serialization_jsonJsonElement : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CybertronKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface CybertronKoin_coreInstanceFactory<T> : CybertronBase
- (instancetype)initWithBeanDefinition:(CybertronKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(CybertronKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CybertronKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CybertronKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CybertronKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) CybertronKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface CybertronKoin_coreScopeDSL : CybertronBase
- (instancetype)initWithScopeQualifier:(id<CybertronKoin_coreQualifier>)scopeQualifier module:(CybertronKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (CybertronKotlinPair<CybertronKoin_coreModule *, CybertronKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (CybertronKotlinPair<CybertronKoin_coreModule *, CybertronKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (CybertronKotlinPair<CybertronKoin_coreModule *, CybertronKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) CybertronKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<CybertronKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface CybertronKoin_coreSingleInstanceFactory<T> : CybertronKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(CybertronKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(CybertronKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CybertronKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CybertronKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CybertronKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface CybertronKoin_coreKoinApplicationCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface CybertronKoin_coreLevel : CybertronKotlinEnum<CybertronKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CybertronKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CybertronKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) CybertronKoin_coreLevel *none __attribute__((swift_name("none")));
+ (CybertronKotlinArray<CybertronKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol CybertronKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(CybertronKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface CybertronKoin_coreParametersHolderCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface CybertronKoin_coreScopeRegistryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface CybertronKtor_client_coreHttpRequestData : CybertronBase
- (instancetype)initWithUrl:(CybertronKtor_httpUrl *)url method:(CybertronKtor_httpHttpMethod *)method headers:(id<CybertronKtor_httpHeaders>)headers body:(CybertronKtor_httpOutgoingContent *)body executionContext:(id<CybertronKotlinx_coroutines_coreJob>)executionContext attributes:(id<CybertronKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<CybertronKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CybertronKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<CybertronKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<CybertronKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CybertronKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CybertronKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface CybertronKtor_client_coreHttpResponseData : CybertronBase
- (instancetype)initWithStatusCode:(CybertronKtor_httpHttpStatusCode *)statusCode requestTime:(CybertronKtor_utilsGMTDate *)requestTime headers:(id<CybertronKtor_httpHeaders>)headers version:(CybertronKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<CybertronKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<CybertronKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<CybertronKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CybertronKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CybertronKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CybertronKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface CybertronKtor_client_coreProxyConfig : CybertronBase
- (instancetype)initWithUrl:(CybertronKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface CybertronKtor_utilsStringValuesBuilder : CybertronBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CybertronKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CybertronKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CybertronKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CybertronKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) CybertronMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface CybertronKtor_httpHeadersBuilder : CybertronKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CybertronKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface CybertronKtor_client_coreHttpRequestBuilderCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface CybertronKtor_httpURLBuilder : CybertronBase
- (instancetype)initWithProtocol:(CybertronKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(CybertronKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (CybertronKtor_httpURLBuilder *)pathComponents:(CybertronKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (CybertronKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) CybertronKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property CybertronKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CybertronKtor_httpHttpMethod : CybertronBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CybertronKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface CybertronKtor_client_coreHttpClientCallCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol CybertronKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(CybertronKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(CybertronLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(CybertronKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(CybertronLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CybertronKtor_ioIoBuffer *)dst completionHandler:(void (^)(CybertronInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CybertronKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CybertronInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CybertronInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CybertronInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(CybertronBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(CybertronByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(CybertronDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(CybertronFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CybertronKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CybertronKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(CybertronInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(CybertronLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(CybertronKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(CybertronKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<CybertronKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(CybertronShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<CybertronKotlinSuspendFunction1>)consumer completionHandler:(void (^)(CybertronKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<CybertronKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(CybertronBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) CybertronKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property CybertronKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CybertronKtor_httpHttpMessage
@required
@property (readonly) id<CybertronKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CybertronKtor_client_coreHttpRequest <CybertronKtor_httpHttpMessage, CybertronKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<CybertronKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CybertronKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) CybertronKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) CybertronKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CybertronKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface CybertronKtor_client_coreHttpResponse : CybertronBase <CybertronKtor_httpHttpMessage, CybertronKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<CybertronKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) CybertronKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CybertronKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CybertronKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CybertronKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CybertronKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface CybertronKotlinAbstractCoroutineContextKey<B, E> : CybertronBase <CybertronKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<CybertronKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<CybertronKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface CybertronKotlinx_coroutines_coreCoroutineDispatcherKey : CybertronKotlinAbstractCoroutineContextKey<id<CybertronKotlinContinuationInterceptor>, CybertronKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<CybertronKotlinCoroutineContextKey>)baseKey safeCast:(id<CybertronKotlinCoroutineContextElement> _Nullable (^)(id<CybertronKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CybertronKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CybertronKtor_utilsPipelinePhase : CybertronBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CybertronKotlinSuspendFunction2 <CybertronKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface CybertronKtor_client_coreHttpReceivePipelinePhases : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CybertronKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface CybertronKtor_client_coreHttpRequestPipelinePhases : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) CybertronKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface CybertronKtor_client_coreHttpResponsePipelinePhases : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CybertronKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface CybertronKtor_client_coreHttpResponseContainer : CybertronBase
- (instancetype)initWithExpectedType:(id<CybertronKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(CybertronKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (CybertronKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (CybertronKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(CybertronKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface CybertronKtor_client_coreHttpSendPipelinePhases : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) CybertronKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CybertronKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CybertronKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CybertronKotlinKClass>)kClass provider:(id<CybertronKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CybertronKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CybertronKotlinKClass>)kClass serializer:(id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CybertronKotlinKClass>)baseClass actualClass:(id<CybertronKotlinKClass>)actualClass actualSerializer:(id<CybertronKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CybertronKotlinKClass>)baseClass defaultSerializerProvider:(id<CybertronKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CybertronKotlinByteArray : CybertronBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CybertronByte *(^)(CybertronInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CybertronKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CybertronKotlinx_coroutines_coreParentJob <CybertronKotlinx_coroutines_coreJob>
@required
- (CybertronKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CybertronKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CybertronKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CybertronKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(CybertronKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<CybertronKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol CybertronKotlinKType
@required
@property (readonly) NSArray<CybertronKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<CybertronKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface CybertronKtor_ioMemory : CybertronBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(CybertronKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(CybertronKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (CybertronKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (CybertronKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface CybertronKtor_ioByteOrder : CybertronKotlinEnum<CybertronKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) CybertronKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (CybertronKotlinArray<CybertronKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CybertronKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CybertronKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CybertronKtor_httpHeaders <CybertronKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CybertronKotlinx_serialization_jsonJsonElementCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CybertronKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface CybertronKoin_coreBeanDefinition<T> : CybertronBase
- (instancetype)initWithScopeQualifier:(id<CybertronKoin_coreQualifier>)scopeQualifier primaryType:(id<CybertronKotlinKClass>)primaryType qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition kind:(CybertronKoin_coreKind *)kind secondaryTypes:(NSArray<id<CybertronKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<CybertronKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<CybertronKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<CybertronKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (CybertronKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<CybertronKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (CybertronKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<CybertronKoin_coreQualifier>)scopeQualifier primaryType:(id<CybertronKotlinKClass>)primaryType qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *))definition kind:(CybertronKoin_coreKind *)kind secondaryTypes:(NSArray<id<CybertronKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<CybertronKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<CybertronKotlinKClass>)clazz qualifier:(id<CybertronKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<CybertronKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CybertronKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(CybertronKoin_coreScope *, CybertronKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) CybertronKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<CybertronKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) id<CybertronKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<CybertronKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<CybertronKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface CybertronKoin_coreInstanceFactoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface CybertronKoin_coreInstanceContext : CybertronBase
- (instancetype)initWithKoin:(CybertronKoin_coreKoin *)koin scope:(CybertronKoin_coreScope *)scope parameters:(CybertronKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CybertronKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) CybertronKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) CybertronKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CybertronKtor_httpUrl : CybertronBase
- (instancetype)initWithProtocol:(CybertronKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CybertronKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<CybertronKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CybertronKtor_httpUrl *)doCopyProtocol:(CybertronKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CybertronKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CybertronKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) CybertronKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CybertronKtor_utilsGMTDate : CybertronBase <CybertronKotlinComparable>
@property (class, readonly, getter=companion) CybertronKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CybertronKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CybertronKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (CybertronKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (CybertronKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CybertronKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CybertronKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CybertronKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) CybertronKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CybertronKtor_httpHttpProtocolVersion : CybertronBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CybertronKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol CybertronKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CybertronKtor_httpURLProtocol : CybertronBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CybertronKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface CybertronKtor_httpParametersBuilder : CybertronKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(CybertronKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CybertronKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property CybertronKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface CybertronKtor_httpURLBuilderCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface CybertronKtor_httpHttpMethodCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<CybertronKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) CybertronKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) CybertronKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) CybertronKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) CybertronKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) CybertronKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) CybertronKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) CybertronKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface CybertronKtor_ioBuffer : CybertronBase
- (instancetype)initWithMemory:(CybertronKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (CybertronKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(CybertronKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) CybertronKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface CybertronKtor_ioChunkBuffer : CybertronKtor_ioBuffer
- (instancetype)initWithMemory:(CybertronKtor_ioMemory *)memory origin:(CybertronKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<CybertronKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(CybertronKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (CybertronKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) CybertronKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) CybertronKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol CybertronKotlinAppendable
@required
- (id<CybertronKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<CybertronKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<CybertronKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol CybertronKtor_ioOutput <CybertronKotlinAppendable, CybertronKtor_ioCloseable>
@required
- (id<CybertronKotlinAppendable>)appendCsq:(CybertronKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property CybertronKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface CybertronKtor_ioIoBuffer : CybertronKtor_ioChunkBuffer <CybertronKtor_ioInput, CybertronKtor_ioOutput>
- (instancetype)initWithMemory:(CybertronKtor_ioMemory *)memory origin:(CybertronKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(CybertronKtor_ioMemory *)memory origin:(CybertronKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<CybertronKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<CybertronKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<CybertronKotlinAppendable>)appendCsq:(CybertronKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<CybertronKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<CybertronKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(CybertronKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (CybertronKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (CybertronKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(CybertronKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(CybertronInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(CybertronInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property CybertronKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface CybertronKtor_ioAbstractInput : CybertronBase <CybertronKtor_ioInput>
- (instancetype)initWithHead:(CybertronKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) CybertronKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (CybertronKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(CybertronKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (CybertronKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(CybertronKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(CybertronKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(CybertronKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (CybertronKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<CybertronKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<CybertronKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property CybertronKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<CybertronKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface CybertronKtor_ioByteReadPacketBase : CybertronKtor_ioAbstractInput
- (instancetype)initWithHead:(CybertronKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) CybertronKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface CybertronKtor_ioByteReadPacketPlatformBase : CybertronKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(CybertronKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface CybertronKtor_ioByteReadPacket : CybertronKtor_ioByteReadPacketPlatformBase <CybertronKtor_ioInput>
- (instancetype)initWithHead:(CybertronKtor_ioChunkBuffer *)head pool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(CybertronKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CybertronKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (CybertronKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (CybertronKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(CybertronKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol CybertronKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (CybertronKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CybertronKotlinByteIterator : CybertronBase <CybertronKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CybertronByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface CybertronKotlinx_coroutines_coreAtomicDesc : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CybertronKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CybertronKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property CybertronKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface CybertronKotlinx_coroutines_coreOpDescriptor : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(CybertronKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : CybertronKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) CybertronKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface CybertronKotlinKTypeProjection : CybertronBase
- (instancetype)initWithVariance:(CybertronKotlinKVariance * _Nullable)variance type:(id<CybertronKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CybertronKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (CybertronKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<CybertronKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (CybertronKotlinKTypeProjection *)doCopyVariance:(CybertronKotlinKVariance * _Nullable)variance type:(id<CybertronKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CybertronKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) CybertronKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface CybertronKtor_ioMemoryCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface CybertronKtor_ioByteOrderCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface CybertronKoin_coreKind : CybertronKotlinEnum<CybertronKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) CybertronKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) CybertronKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (CybertronKotlinArray<CybertronKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface CybertronKoin_coreCallbacks<T> : CybertronBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (CybertronKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CybertronKtor_httpParameters <CybertronKtor_utilsStringValues>
@required
@property (readonly) CybertronKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface CybertronKtor_httpUrlCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface CybertronKtor_utilsGMTDateCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CybertronKtor_utilsWeekDay : CybertronKotlinEnum<CybertronKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CybertronKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (CybertronKotlinArray<CybertronKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CybertronKtor_utilsMonth : CybertronKotlinEnum<CybertronKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CybertronKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CybertronKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CybertronKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CybertronKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CybertronKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CybertronKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CybertronKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CybertronKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CybertronKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CybertronKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CybertronKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CybertronKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CybertronKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (CybertronKotlinArray<CybertronKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface CybertronKtor_httpHttpProtocolVersionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (CybertronKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) CybertronKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface CybertronKtor_httpURLProtocolCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) CybertronKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) CybertronKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) CybertronKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) CybertronKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) CybertronKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, CybertronKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface CybertronKtor_httpUrlEncodingOption : CybertronKotlinEnum<CybertronKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) CybertronKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) CybertronKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) CybertronKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (CybertronKotlinArray<CybertronKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface CybertronKtor_ioBufferCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol CybertronKtor_ioObjectPool <CybertronKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface CybertronKtor_ioChunkBufferCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<CybertronKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<CybertronKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface CybertronKotlinCharArray : CybertronBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(CybertronInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CybertronKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface CybertronKtor_ioIoBufferCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<CybertronKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<CybertronKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<CybertronKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface CybertronKtor_ioAbstractInputCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface CybertronKtor_ioByteReadPacketBaseCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface CybertronKtor_ioByteReadPacketCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CybertronKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface CybertronKotlinx_coroutines_coreAtomicOp<__contravariant T> : CybertronKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) CybertronKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface CybertronKotlinx_coroutines_coreLockFreeLinkedListNode : CybertronBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(CybertronBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CybertronBoolean *(^)(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CybertronBoolean *(^)(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(CybertronBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(CybertronBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : CybertronKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CybertronKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(CybertronKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CybertronKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface CybertronKotlinKVariance : CybertronKotlinEnum<CybertronKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CybertronKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) CybertronKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) CybertronKotlinKVariance *out __attribute__((swift_name("out")));
+ (CybertronKotlinArray<CybertronKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface CybertronKotlinKTypeProjectionCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKotlinKTypeProjection *)contravariantType:(id<CybertronKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (CybertronKotlinKTypeProjection *)covariantType:(id<CybertronKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (CybertronKotlinKTypeProjection *)invariantType:(id<CybertronKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) CybertronKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface CybertronKtor_utilsWeekDayCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CybertronKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface CybertronKtor_utilsMonthCompanion : CybertronBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CybertronKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (CybertronKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CybertronKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface CybertronKotlinCharIterator : CybertronBase <CybertronKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CybertronKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : CybertronKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CybertronKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CybertronKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
