#include "common.h"

#define ret_name(value, macro, str) if(value == macro){static const char *s = str; return s;}

static const char *errorDomainName(uint32_t domain) {
	ret_name(domain, MONGOC_ERROR_CLIENT,           "CLIENT");
	ret_name(domain, MONGOC_ERROR_STREAM,           "STREAM");
	ret_name(domain, MONGOC_ERROR_PROTOCOL,         "PROTOCOL");
	ret_name(domain, MONGOC_ERROR_CURSOR,           "CURSOR");
	ret_name(domain, MONGOC_ERROR_QUERY,            "QUERY");
	ret_name(domain, MONGOC_ERROR_INSERT,           "INSERT");
	ret_name(domain, MONGOC_ERROR_SASL,             "SASL");
	ret_name(domain, MONGOC_ERROR_BSON,             "BSON");
	ret_name(domain, MONGOC_ERROR_MATCHER,          "MATCHER");
	ret_name(domain, MONGOC_ERROR_NAMESPACE,        "NAMESPACE");
	ret_name(domain, MONGOC_ERROR_COMMAND,          "COMMAND");
	ret_name(domain, MONGOC_ERROR_COLLECTION,       "COLLECTION");
	ret_name(domain, MONGOC_ERROR_GRIDFS,           "GRIDFS");
	ret_name(domain, MONGOC_ERROR_SCRAM,            "SCRAM");
	ret_name(domain, MONGOC_ERROR_SERVER_SELECTION, "SERVER_SELECTION");
	ret_name(domain, MONGOC_ERROR_WRITE_CONCERN,    "WRITE_CONCERN");
	ret_name(domain, MONGOC_ERROR_SERVER,           "SERVER");
	ret_name(domain, MONGOC_ERROR_TRANSACTION,      "TRANSACTION");

	return 0;
}

static const char *errorCodeName(uint32_t code) {
	ret_name(code, MONGOC_ERROR_STREAM_INVALID_TYPE,               "STREAM_INVALID_TYPE")
	ret_name(code, MONGOC_ERROR_STREAM_INVALID_STATE,              "STREAM_INVALID_STATE")
	ret_name(code, MONGOC_ERROR_STREAM_NAME_RESOLUTION,            "STREAM_NAME_RESOLUTION")
	ret_name(code, MONGOC_ERROR_STREAM_SOCKET,                     "STREAM_SOCKET")
	ret_name(code, MONGOC_ERROR_STREAM_CONNECT,                    "STREAM_CONNECT")
	ret_name(code, MONGOC_ERROR_STREAM_NOT_ESTABLISHED,            "STREAM_NOT_ESTABLISHED")
	ret_name(code, MONGOC_ERROR_CLIENT_NOT_READY,                  "CLIENT_NOT_READY")
	ret_name(code, MONGOC_ERROR_CLIENT_TOO_BIG,                    "CLIENT_TOO_BIG")
	ret_name(code, MONGOC_ERROR_CLIENT_TOO_SMALL,                  "CLIENT_TOO_SMALL")
	ret_name(code, MONGOC_ERROR_CLIENT_GETNONCE,                   "CLIENT_GETNONCE")
	ret_name(code, MONGOC_ERROR_CLIENT_AUTHENTICATE,               "CLIENT_AUTHENTICATE")
	ret_name(code, MONGOC_ERROR_CLIENT_NO_ACCEPTABLE_PEER,         "CLIENT_NO_ACCEPTABLE_PEER")
	ret_name(code, MONGOC_ERROR_CLIENT_IN_EXHAUST,                 "CLIENT_IN_EXHAUST")
	ret_name(code, MONGOC_ERROR_PROTOCOL_INVALID_REPLY,            "PROTOCOL_INVALID_REPLY")
	ret_name(code, MONGOC_ERROR_PROTOCOL_BAD_WIRE_VERSION,         "PROTOCOL_BAD_WIRE_VERSION")
	ret_name(code, MONGOC_ERROR_CURSOR_INVALID_CURSOR,             "CURSOR_INVALID_CURSOR")
	ret_name(code, MONGOC_ERROR_QUERY_FAILURE,                     "QUERY_FAILURE")
	ret_name(code, MONGOC_ERROR_BSON_INVALID,                      "BSON_INVALID")
	ret_name(code, MONGOC_ERROR_MATCHER_INVALID,                   "MATCHER_INVALID")
	ret_name(code, MONGOC_ERROR_NAMESPACE_INVALID,                 "NAMESPACE_INVALID")
	ret_name(code, MONGOC_ERROR_NAMESPACE_INVALID_FILTER_TYPE,     "NAMESPACE_INVALID_FILTER_TYPE")
	ret_name(code, MONGOC_ERROR_COMMAND_INVALID_ARG,               "COMMAND_INVALID_ARG")
	ret_name(code, MONGOC_ERROR_COLLECTION_INSERT_FAILED,          "COLLECTION_INSERT_FAILED")
	ret_name(code, MONGOC_ERROR_COLLECTION_UPDATE_FAILED,          "COLLECTION_UPDATE_FAILED")
	ret_name(code, MONGOC_ERROR_COLLECTION_DELETE_FAILED,          "COLLECTION_DELETE_FAILED")
	ret_name(code, MONGOC_ERROR_COLLECTION_DOES_NOT_EXIST,         "COLLECTION_DOES_NOT_EXIST")
	ret_name(code, MONGOC_ERROR_GRIDFS_INVALID_FILENAME,           "GRIDFS_INVALID_FILENAME")
	ret_name(code, MONGOC_ERROR_SCRAM_NOT_DONE,                    "SCRAM_NOT_DONE")
	ret_name(code, MONGOC_ERROR_SCRAM_PROTOCOL_ERROR,              "SCRAM_PROTOCOL_ERROR")
	ret_name(code, MONGOC_ERROR_QUERY_COMMAND_NOT_FOUND,           "QUERY_COMMAND_NOT_FOUND")
	ret_name(code, MONGOC_ERROR_QUERY_NOT_TAILABLE,                "QUERY_NOT_TAILABLE")
	ret_name(code, MONGOC_ERROR_SERVER_SELECTION_BAD_WIRE_VERSION, "SERVER_SELECTION_BAD_WIRE_VERSION")
	ret_name(code, MONGOC_ERROR_SERVER_SELECTION_FAILURE,          "SERVER_SELECTION_FAILURE")
	ret_name(code, MONGOC_ERROR_SERVER_SELECTION_INVALID_ID,       "SERVER_SELECTION_INVALID_ID")
	ret_name(code, MONGOC_ERROR_GRIDFS_CHUNK_MISSING,              "GRIDFS_CHUNK_MISSING")
	ret_name(code, MONGOC_ERROR_GRIDFS_PROTOCOL_ERROR,             "GRIDFS_PROTOCOL_ERROR")
	ret_name(code, MONGOC_ERROR_PROTOCOL_ERROR,                    "PROTOCOL_ERROR")
	ret_name(code, MONGOC_ERROR_WRITE_CONCERN_ERROR,               "WRITE_CONCERN_ERROR")
	ret_name(code, MONGOC_ERROR_DUPLICATE_KEY,                     "DUPLICATE_KEY")
	ret_name(code, MONGOC_ERROR_CHANGE_STREAM_NO_RESUME_TOKEN,     "CHANGE_STREAM_NO_RESUME_TOKEN")
	ret_name(code, MONGOC_ERROR_CLIENT_SESSION_FAILURE,            "CLIENT_SESSION_FAILURE")
	ret_name(code, MONGOC_ERROR_TRANSACTION_INVALID_STATE,         "TRANSACTION_INVALID_STATE")
	ret_name(code, MONGOC_ERROR_GRIDFS_CORRUPT,                    "GRIDFS_CORRUPT")
	ret_name(code, MONGOC_ERROR_GRIDFS_BUCKET_FILE_NOT_FOUND,      "GRIDFS_BUCKET_FILE_NOT_FOUND")
	ret_name(code, MONGOC_ERROR_GRIDFS_BUCKET_STREAM,              "GRIDFS_BUCKET_STREAM")

	return 0;
}

static const char *errorServerCodeName(uint32_t code) {
	ret_name(code, 0, "OK")
	ret_name(code, 1, "InternalError")
	ret_name(code, 2, "BadValue")
	ret_name(code, 3, "OBSOLETE_DuplicateKey")
	ret_name(code, 4, "NoSuchKey")
	ret_name(code, 5, "GraphContainsCycle")
	ret_name(code, 6, "HostUnreachable")
	ret_name(code, 7, "HostNotFound")
	ret_name(code, 8, "UnknownError")
	ret_name(code, 9, "FailedToParse")
	ret_name(code, 10, "CannotMutateObject")
	ret_name(code, 11, "UserNotFound")
	ret_name(code, 12, "UnsupportedFormat")
	ret_name(code, 13, "Unauthorized")
	ret_name(code, 14, "TypeMismatch")
	ret_name(code, 15, "Overflow")
	ret_name(code, 16, "InvalidLength")
	ret_name(code, 17, "ProtocolError")
	ret_name(code, 18, "AuthenticationFailed")
	ret_name(code, 19, "CannotReuseObject")
	ret_name(code, 20, "IllegalOperation")
	ret_name(code, 21, "EmptyArrayOperation")
	ret_name(code, 22, "InvalidBSON")
	ret_name(code, 23, "AlreadyInitialized")
	ret_name(code, 24, "LockTimeout")
	ret_name(code, 25, "RemoteValidationError")
	ret_name(code, 26, "NamespaceNotFound")
	ret_name(code, 27, "IndexNotFound")
	ret_name(code, 28, "PathNotViable")
	ret_name(code, 29, "NonExistentPath")
	ret_name(code, 30, "InvalidPath")
	ret_name(code, 31, "RoleNotFound")
	ret_name(code, 32, "RolesNotRelated")
	ret_name(code, 33, "PrivilegeNotFound")
	ret_name(code, 34, "CannotBackfillArray")
	ret_name(code, 35, "UserModificationFailed")
	ret_name(code, 36, "RemoteChangeDetected")
	ret_name(code, 37, "FileRenameFailed")
	ret_name(code, 38, "FileNotOpen")
	ret_name(code, 39, "FileStreamFailed")
	ret_name(code, 40, "ConflictingUpdateOperators")
	ret_name(code, 41, "FileAlreadyOpen")
	ret_name(code, 42, "LogWriteFailed")
	ret_name(code, 43, "CursorNotFound")
	ret_name(code, 45, "UserDataInconsistent")
	ret_name(code, 46, "LockBusy")
	ret_name(code, 47, "NoMatchingDocument")
	ret_name(code, 48, "NamespaceExists")
	ret_name(code, 49, "InvalidRoleModification")
	ret_name(code, 50, "MaxTimeMSExpired")
	ret_name(code, 51, "ManualInterventionRequired")
	ret_name(code, 52, "DollarPrefixedFieldName")
	ret_name(code, 53, "InvalidIdField")
	ret_name(code, 54, "NotSingleValueField")
	ret_name(code, 55, "InvalidDBRef")
	ret_name(code, 56, "EmptyFieldName")
	ret_name(code, 57, "DottedFieldName")
	ret_name(code, 58, "RoleModificationFailed")
	ret_name(code, 59, "CommandNotFound")
	ret_name(code, 60, "OBSOLETE_DatabaseNotFound")
	ret_name(code, 61, "ShardKeyNotFound")
	ret_name(code, 62, "OplogOperationUnsupported")
	ret_name(code, 63, "StaleShardVersion")
	ret_name(code, 64, "WriteConcernFailed")
	ret_name(code, 65, "MultipleErrorsOccurred")
	ret_name(code, 66, "ImmutableField")
	ret_name(code, 67, "CannotCreateIndex")
	ret_name(code, 68, "IndexAlreadyExists")
	ret_name(code, 69, "AuthSchemaIncompatible")
	ret_name(code, 70, "ShardNotFound")
	ret_name(code, 71, "ReplicaSetNotFound")
	ret_name(code, 72, "InvalidOptions")
	ret_name(code, 73, "InvalidNamespace")
	ret_name(code, 74, "NodeNotFound")
	ret_name(code, 75, "WriteConcernLegacyOK")
	ret_name(code, 76, "NoReplicationEnabled")
	ret_name(code, 77, "OperationIncomplete")
	ret_name(code, 78, "CommandResultSchemaViolation")
	ret_name(code, 79, "UnknownReplWriteConcern")
	ret_name(code, 80, "RoleDataInconsistent")
	ret_name(code, 81, "NoMatchParseContext")
	ret_name(code, 82, "NoProgressMade")
	ret_name(code, 83, "RemoteResultsUnavailable")
	ret_name(code, 84, "DuplicateKeyValue")
	ret_name(code, 85, "IndexOptionsConflict")
	ret_name(code, 86, "IndexKeySpecsConflict")
	ret_name(code, 87, "CannotSplit")
	ret_name(code, 88, "SplitFailed_OBSOLETE")
	ret_name(code, 89, "NetworkTimeout")
	ret_name(code, 90, "CallbackCanceled")
	ret_name(code, 91, "ShutdownInProgress")
	ret_name(code, 92, "SecondaryAheadOfPrimary")
	ret_name(code, 93, "InvalidReplicaSetConfig")
	ret_name(code, 94, "NotYetInitialized")
	ret_name(code, 95, "NotSecondary")
	ret_name(code, 96, "OperationFailed")
	ret_name(code, 97, "NoProjectionFound")
	ret_name(code, 98, "DBPathInUse")
	ret_name(code, 100, "UnsatisfiableWriteConcern")
	ret_name(code, 101, "OutdatedClient")
	ret_name(code, 102, "IncompatibleAuditMetadata")
	ret_name(code, 103, "NewReplicaSetConfigurationIncompatible")
	ret_name(code, 104, "NodeNotElectable")
	ret_name(code, 105, "IncompatibleShardingMetadata")
	ret_name(code, 106, "DistributedClockSkewed")
	ret_name(code, 107, "LockFailed")
	ret_name(code, 108, "InconsistentReplicaSetNames")
	ret_name(code, 109, "ConfigurationInProgress")
	ret_name(code, 110, "CannotInitializeNodeWithData")
	ret_name(code, 111, "NotExactValueField")
	ret_name(code, 112, "WriteConflict")
	ret_name(code, 113, "InitialSyncFailure")
	ret_name(code, 114, "InitialSyncOplogSourceMissing")
	ret_name(code, 115, "CommandNotSupported")
	ret_name(code, 116, "DocTooLargeForCapped")
	ret_name(code, 117, "ConflictingOperationInProgress")
	ret_name(code, 118, "NamespaceNotSharded")
	ret_name(code, 119, "InvalidSyncSource")
	ret_name(code, 120, "OplogStartMissing")
	ret_name(code, 121, "DocumentValidationFailure")
	ret_name(code, 122, "OBSOLETE_ReadAfterOptimeTimeout")
	ret_name(code, 123, "NotAReplicaSet")
	ret_name(code, 124, "IncompatibleElectionProtocol")
	ret_name(code, 125, "CommandFailed")
	ret_name(code, 126, "RPCProtocolNegotiationFailed")
	ret_name(code, 127, "UnrecoverableRollbackError")
	ret_name(code, 128, "LockNotFound")
	ret_name(code, 129, "LockStateChangeFailed")
	ret_name(code, 130, "SymbolNotFound")
	ret_name(code, 132, "OBSOLETE_ConfigServersInconsistent")
	ret_name(code, 133, "FailedToSatisfyReadPreference")
	ret_name(code, 134, "ReadConcernMajorityNotAvailableYet")
	ret_name(code, 135, "StaleTerm")
	ret_name(code, 136, "CappedPositionLost")
	ret_name(code, 137, "IncompatibleShardingConfigVersion")
	ret_name(code, 138, "RemoteOplogStale")
	ret_name(code, 139, "JSInterpreterFailure")
	ret_name(code, 140, "InvalidSSLConfiguration")
	ret_name(code, 141, "SSLHandshakeFailed")
	ret_name(code, 142, "JSUncatchableError")
	ret_name(code, 143, "CursorInUse")
	ret_name(code, 144, "IncompatibleCatalogManager")
	ret_name(code, 145, "PooledConnectionsDropped")
	ret_name(code, 146, "ExceededMemoryLimit")
	ret_name(code, 147, "ZLibError")
	ret_name(code, 148, "ReadConcernMajorityNotEnabled")
	ret_name(code, 149, "NoConfigMaster")
	ret_name(code, 150, "StaleEpoch")
	ret_name(code, 151, "OperationCannotBeBatched")
	ret_name(code, 152, "OplogOutOfOrder")
	ret_name(code, 153, "ChunkTooBig")
	ret_name(code, 154, "InconsistentShardIdentity")
	ret_name(code, 155, "CannotApplyOplogWhilePrimary")
	ret_name(code, 156, "OBSOLETE_NeedsDocumentMove")
	ret_name(code, 157, "CanRepairToDowngrade")
	ret_name(code, 158, "MustUpgrade")
	ret_name(code, 159, "DurationOverflow")
	ret_name(code, 160, "MaxStalenessOutOfRange")
	ret_name(code, 161, "IncompatibleCollationVersion")
	ret_name(code, 162, "CollectionIsEmpty")
	ret_name(code, 163, "ZoneStillInUse")
	ret_name(code, 164, "InitialSyncActive")
	ret_name(code, 165, "ViewDepthLimitExceeded")
	ret_name(code, 166, "CommandNotSupportedOnView")
	ret_name(code, 167, "OptionNotSupportedOnView")
	ret_name(code, 168, "InvalidPipelineOperator")
	ret_name(code, 169, "CommandOnShardedViewNotSupportedOnMongod")
	ret_name(code, 170, "TooManyMatchingDocuments")
	ret_name(code, 171, "CannotIndexParallelArrays")
	ret_name(code, 172, "TransportSessionClosed")
	ret_name(code, 173, "TransportSessionNotFound")
	ret_name(code, 174, "TransportSessionUnknown")
	ret_name(code, 175, "QueryPlanKilled")
	ret_name(code, 176, "FileOpenFailed")
	ret_name(code, 177, "ZoneNotFound")
	ret_name(code, 178, "RangeOverlapConflict")
	ret_name(code, 179, "WindowsPdhError")
	ret_name(code, 180, "BadPerfCounterPath")
	ret_name(code, 181, "AmbiguousIndexKeyPattern")
	ret_name(code, 182, "InvalidViewDefinition")
	ret_name(code, 183, "ClientMetadataMissingField")
	ret_name(code, 184, "ClientMetadataAppNameTooLarge")
	ret_name(code, 185, "ClientMetadataDocumentTooLarge")
	ret_name(code, 186, "ClientMetadataCannotBeMutated")
	ret_name(code, 187, "LinearizableReadConcernError")
	ret_name(code, 188, "IncompatibleServerVersion")
	ret_name(code, 189, "PrimarySteppedDown")
	ret_name(code, 190, "MasterSlaveConnectionFailure")
	ret_name(code, 191, "OBSOLETE_BalancerLostDistributedLock")
	ret_name(code, 192, "FailPointEnabled")
	ret_name(code, 193, "NoShardingEnabled")
	ret_name(code, 194, "BalancerInterrupted")
	ret_name(code, 195, "ViewPipelineMaxSizeExceeded")
	ret_name(code, 197, "InvalidIndexSpecificationOption")
	ret_name(code, 198, "OBSOLETE_ReceivedOpReplyMessage")
	ret_name(code, 199, "ReplicaSetMonitorRemoved")
	ret_name(code, 200, "ChunkRangeCleanupPending")
	ret_name(code, 201, "CannotBuildIndexKeys")
	ret_name(code, 202, "NetworkInterfaceExceededTimeLimit")
	ret_name(code, 203, "ShardingStateNotInitialized")
	ret_name(code, 204, "TimeProofMismatch")
	ret_name(code, 205, "ClusterTimeFailsRateLimiter")
	ret_name(code, 206, "NoSuchSession")
	ret_name(code, 207, "InvalidUUID")
	ret_name(code, 208, "TooManyLocks")
	ret_name(code, 209, "StaleClusterTime")
	ret_name(code, 210, "CannotVerifyAndSignLogicalTime")
	ret_name(code, 211, "KeyNotFound")
	ret_name(code, 212, "IncompatibleRollbackAlgorithm")
	ret_name(code, 213, "DuplicateSession")
	ret_name(code, 214, "AuthenticationRestrictionUnmet")
	ret_name(code, 215, "DatabaseDropPending")
	ret_name(code, 216, "ElectionInProgress")
	ret_name(code, 217, "IncompleteTransactionHistory")
	ret_name(code, 218, "UpdateOperationFailed")
	ret_name(code, 219, "FTDCPathNotSet")
	ret_name(code, 220, "FTDCPathAlreadySet")
	ret_name(code, 221, "IndexModified")
	ret_name(code, 222, "CloseChangeStream")
	ret_name(code, 223, "IllegalOpMsgFlag")
	ret_name(code, 224, "QueryFeatureNotAllowed")
	ret_name(code, 225, "TransactionTooOld")
	ret_name(code, 226, "AtomicityFailure")
	ret_name(code, 227, "CannotImplicitlyCreateCollection")
	ret_name(code, 228, "SessionTransferIncomplete")
	ret_name(code, 229, "MustDowngrade")
	ret_name(code, 230, "DNSHostNotFound")
	ret_name(code, 231, "DNSProtocolError")
	ret_name(code, 232, "MaxSubPipelineDepthExceeded")
	ret_name(code, 233, "TooManyDocumentSequences")
	ret_name(code, 234, "RetryChangeStream")
	ret_name(code, 235, "InternalErrorNotSupported")
	ret_name(code, 236, "ForTestingErrorExtraInfo")
	ret_name(code, 237, "CursorKilled")
	ret_name(code, 238, "NotImplemented")
	ret_name(code, 239, "SnapshotTooOld")
	ret_name(code, 240, "DNSRecordTypeMismatch")
	ret_name(code, 241, "ConversionFailure")
	ret_name(code, 242, "CannotCreateCollection")
	ret_name(code, 243, "IncompatibleWithUpgradedServer")
	ret_name(code, 244, "NOT_YET_AVAILABLE_TransactionAborted")
	ret_name(code, 245, "BrokenPromise")
	ret_name(code, 246, "SnapshotUnavailable")
	ret_name(code, 247, "ProducerConsumerQueueBatchTooLarge")
	ret_name(code, 248, "ProducerConsumerQueueEndClosed")
	ret_name(code, 249, "StaleDbVersion")
	ret_name(code, 250, "StaleChunkHistory")
	ret_name(code, 251, "NoSuchTransaction")
	ret_name(code, 252, "ReentrancyNotAllowed")
	ret_name(code, 253, "FreeMonHttpInFlight")
	ret_name(code, 254, "FreeMonHttpTemporaryFailure")
	ret_name(code, 255, "FreeMonHttpPermanentFailure")
	ret_name(code, 256, "TransactionCommitted")
	ret_name(code, 257, "TransactionTooLarge")
	ret_name(code, 258, "UnknownFeatureCompatibilityVersion")
	ret_name(code, 259, "KeyedExecutorRetry")
	ret_name(code, 260, "InvalidResumeToken")
	ret_name(code, 261, "TooManyLogicalSessions")
	ret_name(code, 262, "ExceededTimeLimit")
	ret_name(code, 263, "OperationNotSupportedInTransaction")
	ret_name(code, 264, "TooManyFilesOpen")
	ret_name(code, 265, "OrphanedRangeCleanUpFailed")
	ret_name(code, 266, "FailPointSetFailed")
	ret_name(code, 267, "PreparedTransactionInProgress")
	ret_name(code, 268, "CannotBackup")
	ret_name(code, 269, "DataModifiedByRepair")
	ret_name(code, 270, "RepairedReplicaSetNode")
	ret_name(code, 271, "JSInterpreterFailureWithStack")
	ret_name(code, 272, "MigrationConflict")
	ret_name(code, 273, "ProducerConsumerQueueProducerQueueDepthExceeded")
	ret_name(code, 274, "ProducerConsumerQueueConsumed")
	ret_name(code, 275, "ExchangePassthrough")
	ret_name(code, 276, "IndexBuildAborted")
	ret_name(code, 277, "AlarmAlreadyFulfilled")
	ret_name(code, 278, "UnsatisfiableCommitQuorum")
	ret_name(code, 279, "ClientDisconnect")
	ret_name(code, 280, "ChangeStreamFatalError")
	ret_name(code, 281, "TransactionCoordinatorSteppingDown")
	ret_name(code, 282, "TransactionCoordinatorReachedAbortDecision")
	ret_name(code, 283, "WouldChangeOwningShard")
	ret_name(code, 284, "ForTestingErrorExtraInfoWithExtraInfoInNamespace")
	ret_name(code, 285, "IndexBuildAlreadyInProgress")
	ret_name(code, 9001, "SocketException")
	ret_name(code, 9996, "OBSOLETE_RecvStaleConfig")
	ret_name(code, 10107, "NotMaster")
	ret_name(code, 10003, "CannotGrowDocumentInCappedNamespace")
	ret_name(code, 10334, "BSONObjectTooLarge")
	ret_name(code, 11000, "DuplicateKey")
	ret_name(code, 11600, "InterruptedAtShutdown")
	ret_name(code, 11601, "Interrupted")
	ret_name(code, 11602, "InterruptedDueToStepDown")
	ret_name(code, 14031, "OutOfDiskSpace")
	ret_name(code, 17280, "KeyTooLong")
	ret_name(code, 12586, "BackgroundOperationInProgressForDatabase")
	ret_name(code, 12587, "BackgroundOperationInProgressForNamespace")
	ret_name(code, 13436, "NotMasterOrSecondary")
	ret_name(code, 13435, "NotMasterNoSlaveOk")
	ret_name(code, 13334, "ShardKeyTooBig")
	ret_name(code, 13388, "StaleConfig")
	ret_name(code, 13297, "DatabaseDifferCase")
	ret_name(code, 13104, "OBSOLETE_PrepareConfigsFailed")

	return 0;
}

static const char *errorServerCodeClassName(uint32_t code) {
	ret_name(code, 6, "NetworkError") // HostUnreachable
	ret_name(code, 7, "NetworkError") // HostNotFound
	ret_name(code, 89, "NetworkError") // NetworkTimeout
	ret_name(code, 9001, "NetworkError") // SocketException
	ret_name(code, 11601, "Interruption") // Interrupted
	ret_name(code, 11600, "Interruption") // InterruptedAtShutdown
	ret_name(code, 11602, "Interruption") // InterruptedDueToStepDown
	ret_name(code, 262, "Interruption") // ExceededTimeLimit
	ret_name(code, 50, "Interruption") // MaxTimeMSExpired
	ret_name(code, 237, "Interruption") // CursorKilled
	ret_name(code, 24, "Interruption") // LockTimeout
	ret_name(code, 279, "Interruption") // ClientDisconnect
	ret_name(code, 10107, "NotMasterError") // NotMaster
	ret_name(code, 13435, "NotMasterError") // NotMasterNoSlaveOk
	ret_name(code, 13436, "NotMasterError") // NotMasterOrSecondary
	ret_name(code, 11602, "NotMasterError") // InterruptedDueToStepDown
	ret_name(code, 189, "NotMasterError") // PrimarySteppedDown
	ret_name(code, 13388, "StaleShardVersionError") // StaleConfig
	ret_name(code, 63, "StaleShardVersionError") // StaleShardVersion
	ret_name(code, 150, "StaleShardVersionError") // StaleEpoch
	ret_name(code, 13388, "NeedRetargettingError") // StaleConfig
	ret_name(code, 63, "NeedRetargettingError") // StaleShardVersion
	ret_name(code, 150, "NeedRetargettingError") // StaleEpoch
	ret_name(code, 227, "NeedRetargettingError") // CannotImplicitlyCreateCollection
	ret_name(code, 64, "WriteConcernError") // WriteConcernFailed
	ret_name(code, 75, "WriteConcernError") // WriteConcernLegacyOK
	ret_name(code, 79, "WriteConcernError") // UnknownReplWriteConcern
	ret_name(code, 100, "WriteConcernError") // UnsatisfiableWriteConcern
	ret_name(code, 91, "ShutdownError") // ShutdownInProgress
	ret_name(code, 11600, "ShutdownError") // InterruptedAtShutdown
	ret_name(code, 223, "ConnectionFatalMessageParseError") // IllegalOpMsgFlag
	ret_name(code, 233, "ConnectionFatalMessageParseError") // TooManyDocumentSequences
	ret_name(code, 262, "ExceededTimeLimitError") // ExceededTimeLimit
	ret_name(code, 50, "ExceededTimeLimitError") // MaxTimeMSExpired
	ret_name(code, 202, "ExceededTimeLimitError") // NetworkInterfaceExceededTimeLimit
	ret_name(code, 239, "SnapshotError") // SnapshotTooOld
	ret_name(code, 246, "SnapshotError") // SnapshotUnavailable
	ret_name(code, 250, "SnapshotError") // StaleChunkHistory
	ret_name(code, 272, "SnapshotError") // MigrationConflict
	ret_name(code, 251, "VoteAbortError") // NoSuchTransaction
	ret_name(code, 225, "VoteAbortError") // TransactionTooOld

	return 0;
}

int buildErrorMessage(lua_State *L, uint32_t domain, uint32_t code, const char *message) {
	//[MONGO][DOMAIN][ERROR] message

	const char *domainName, *name;

	// category
	lua_pushliteral(L, "[MONGO]");

	if (BSON_LIKELY(domainName = errorDomainName(domain))) {
		lua_pushfstring(L, "[%s]", domainName);
	}
	else {
		lua_pushfstring(L, "[%d]", domain);
	}

	if (domain == MONGOC_ERROR_SERVER) {
		name = errorServerCodeName(code);
	}
	else {
		name = errorCodeName(code);
	}

	if (BSON_LIKELY(name)) {
		lua_pushfstring(L, "[%s] ", name);
	}
	else {
		lua_pushfstring(L, "[%d] ", code);
	}

	if (BSON_LIKELY(message)) {
		lua_pushstring(L, message);
	}
	else
	{
		lua_pushliteral(L, "");
	}

	lua_concat(L, 4);

	return 1;
}

static int checkError(lua_State *L, int index){
	int top = lua_gettop(L), res = 0;
	if (BSON_LIKELY(lua_istable(L, index))) {
	if (BSON_LIKELY(lua_getmetatable(L, index))) {
		luaL_getmetatable(L, TYPE_ERROR);
		if (BSON_LIKELY(lua_rawequal(L, -1, -2))) {
			res = 1;
		}
		}
	}
	lua_settop(L, top);
	return res;
}

static uint32_t getErrorCode(lua_State* L) {
	uint32_t code;
	lua_pushliteral(L, "code");
	lua_rawget(L, 1);
	code = lua_tointeger(L, -1);
	lua_pop(L, 1);
	return code;
}

static uint32_t getErrorDomain(lua_State* L) {
	uint32_t domain;
	lua_pushliteral(L, "domain");
	lua_rawget(L, 1);
	domain = lua_tointeger(L, -1);
	lua_pop(L, 1);
	return domain;
}

static const char* getErrorMessage(lua_State* L) {
	const char *message;
	lua_pushliteral(L, "message");
	lua_rawget(L, 1);
	message = lua_tostring(L, -1);
	lua_pop(L, 1);
	return message;
}

static bson_t* getErrorReply(lua_State* L) {
	bson_t *reply;

	lua_pushliteral(L, "reply");
	lua_rawget(L, 1);

	if (lua_isnil(L, -1)) {
		lua_pop(L, 1);
    return 0;
	}

	reply = checkBSON(L, -1);
	lua_pop(L, 1);

	return reply;
}

static m_domainName(lua_State* L) {
	uint32_t domain = getErrorDomain(L);
	const char *domainName = errorDomainName(domain);

	if (domainName) {
		lua_pushstring(L, domainName);
	}
	else {
		lua_pushnil(L);
	}

	return 1;
}

static m_codeName(lua_State* L) {
  uint32_t code = getErrorCode(L);
	uint32_t domain = getErrorDomain(L);
	const char *name;

	if (domain == MONGOC_ERROR_SERVER) {
		name = errorServerCodeName(code);
	}
	else {
		name = errorCodeName(code);
	}

	if (name) {
		lua_pushstring(L, name);
	}
	else {
		lua_pushnil(L);
	}

	return 1;
}

static m_serverClass(lua_State* L) {
	uint32_t code = getErrorCode(L);
	uint32_t domain = getErrorDomain(L);
	const char *name = 0;

	if (domain == MONGOC_ERROR_SERVER) {
		name = errorServerCodeClassName(code);
	}

	if (name) {
		lua_pushstring(L, name);
	}
	else {
		lua_pushnil(L);
	}

	return 1;
}

static m_hasLabel(lua_State* L) {
	bson_t *reply;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	reply = getErrorReply(L);

	if (reply) {
		const char *label = luaL_checkstring(L, 2);
		bool code = mongoc_error_has_label(reply, label);
		lua_pushboolean(L, code ? 1 : 0);
	}
	else {
		lua_pushboolean(L, 0);
	}

	return 1;
}

#define ret_true_if(cond) if(cond){lua_pushboolean(L, 1); return 1;}

static int m_isNetworkError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 6) // HostUnreachable
	ret_true_if(code == 7) // HostNotFound
	ret_true_if(code == 89) // NetworkTimeout
	ret_true_if(code == 9001) // SocketException

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isInterruption(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 11601) // Interrupted
	ret_true_if(code == 11600) // InterruptedAtShutdown
	ret_true_if(code == 11602) // InterruptedDueToStepDown
	ret_true_if(code == 262) // ExceededTimeLimit
	ret_true_if(code == 50) // MaxTimeMSExpired
	ret_true_if(code == 237) // CursorKilled
	ret_true_if(code == 24) // LockTimeout
	ret_true_if(code == 279) // ClientDisconnect

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isNotMasterError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 10107) // NotMaster
	ret_true_if(code == 13435) // NotMasterNoSlaveOk
	ret_true_if(code == 13436) // NotMasterOrSecondary
	ret_true_if(code == 11602) // InterruptedDueToStepDown
	ret_true_if(code == 189) // PrimarySteppedDown

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isStaleShardVersionError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 13388) // StaleConfig
	ret_true_if(code == 63) // StaleShardVersion
	ret_true_if(code == 150) // StaleEpoch

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isNeedRetargettingError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 13388) // StaleConfig
	ret_true_if(code == 63) // StaleShardVersion
	ret_true_if(code == 150) // StaleEpoch
	ret_true_if(code == 227) // CannotImplicitlyCreateCollection

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isWriteConcernError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 64) // WriteConcernFailed
	ret_true_if(code == 75) // WriteConcernLegacyOK
	ret_true_if(code == 79) // UnknownReplWriteConcern
	ret_true_if(code == 100) // UnsatisfiableWriteConcern

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isShutdownError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 91) // ShutdownInProgress
	ret_true_if(code == 11600) // InterruptedAtShutdown

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isConnectionFatalMessageParseError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 223) // IllegalOpMsgFlag
	ret_true_if(code == 233) // TooManyDocumentSequences

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isExceededTimeLimitError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 262) // ExceededTimeLimit
	ret_true_if(code == 50) // MaxTimeMSExpired
	ret_true_if(code == 202) // NetworkInterfaceExceededTimeLimit

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isSnapshotError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 239) // SnapshotTooOld
	ret_true_if(code == 246) // SnapshotUnavailable
	ret_true_if(code == 250) // StaleChunkHistory
	ret_true_if(code == 272) // MigrationConflict

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isVoteAbortError(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		lua_pushboolean(L, 0);
		return 1;
	}
	code = getErrorCode(L);

	ret_true_if(code == 251) // NoSuchTransaction
	ret_true_if(code == 225) // TransactionTooOld

	lua_pushboolean(L, 0);
	return 1;
}

static int m_isRetryable(lua_State *L){
	uint32_t code;
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}
	code = getErrorCode(L);

	if(MONGOC_ERROR_SERVER != getErrorDomain(L)){
		ret_true_if(code == 6) // NetworkError:HostUnreachable
		ret_true_if(code == 7) // NetworkError:HostNotFound
		ret_true_if(code == 89) // NetworkError:NetworkTimeout
		ret_true_if(code == 9001) // NetworkError:SocketException
		ret_true_if(code == 10107) // NotMasterError:NotMaster
		ret_true_if(code == 13435) // NotMasterError:NotMasterNoSlaveOk
		ret_true_if(code == 13436) // NotMasterError:NotMasterOrSecondary
		ret_true_if(code == 11602) // NotMasterError:InterruptedDueToStepDown
		ret_true_if(code == 189) // NotMasterError:PrimarySteppedDown
		ret_true_if(code == 91) // ShutdownError:ShutdownInProgress
		ret_true_if(code == 11600) // ShutdownError:InterruptedAtShutdown
	}

	lua_pushboolean(L, 0);
	return 1;
}

#define METHODS_OFFSET 3
const char *keys[] = {
	"domainName",
	"codeName",
	"serverClass",

	// methods
	"hasLabel",
	"isNetworkError",
	"isInterruption",
	"isNotMasterError",
	"isStaleShardVersionError",
	"isNeedRetargettingError",
	"isWriteConcernError",
	"isShutdownError",
	"isConnectionFatalMessageParseError",
	"isExceededTimeLimitError",
	"isSnapshotError",
	"isVoteAbortError",
	"isRetryable",
	0
};

static const lua_CFunction m_getters[] = {
	m_domainName,
	m_codeName,
	m_serverClass,

	// methods
	m_hasLabel,
	m_isNetworkError,
	m_isInterruption,
	m_isNotMasterError,
	m_isStaleShardVersionError,
	m_isNeedRetargettingError,
	m_isWriteConcernError,
	m_isShutdownError,
	m_isConnectionFatalMessageParseError,
	m_isExceededTimeLimitError,
	m_isSnapshotError,
	m_isVoteAbortError,
	m_isRetryable,
};

static int m_index(lua_State *L) {
	int key;

	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	key = luaL_checkoption(L, 2, 0, keys);

	if (key < METHODS_OFFSET) {
		lua_settop(L, 1);
		return m_getters[key](L);
	}

	lua_pushcfunction(L, m_getters[key]);
	return 1;
}

static int m_newIndex(lua_State *L){
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}
	lua_pushliteral(L, TYPE_ERROR" is immutable object");
	return lua_error(L);
}

static int m_tostring(lua_State *L) {
	if (BSON_UNLIKELY(!checkError(L, 1))) {
		return typeError(L, 1, TYPE_ERROR);
	}

	return buildErrorMessage(L, getErrorDomain(L), getErrorCode(L), getErrorMessage(L));
}

static const luaL_Reg funcs[] = {
	{ "__index", m_index },
	{ "__newindex", m_newIndex },
	{ "__tostring", m_tostring },

	{ 0, 0 },
};

void pushErrorMessage(lua_State *L, const bson_error_t *error, bson_t *reply) {
	if (reply) {
		bson_destroy(reply);
	}
	buildErrorMessage(L, error->domain, error->code, error->message);
}

void pushError(lua_State *L, const bson_error_t *error, bson_t *reply) {
	lua_createtable(L, 0, 4);
	setType(L, TYPE_ERROR, funcs);

	lua_pushliteral(L, "domain");
	lua_pushinteger(L, error->domain);
	lua_rawset(L, -3);

	lua_pushliteral(L, "code");
	lua_pushinteger(L, error->code);
	lua_rawset(L, -3);

	lua_pushliteral(L, "message");
	lua_pushstring(L, error->message);
	lua_rawset(L, -3);

	if (reply) {
		lua_pushliteral(L, "reply");
		pushBSONWithSteal(L, reply);
		lua_rawset(L, -3);
	}
}
