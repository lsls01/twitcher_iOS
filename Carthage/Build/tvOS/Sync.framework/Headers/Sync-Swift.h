// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import CoreData;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSManagedObjectContext;
enum DataStackStoreType : NSInteger;
@class NSBundle;
@class NSManagedObjectModel;
@class NSError;
@class NSPersistentStoreRequest;

SWIFT_CLASS("_TtC4Sync9DataStack")
@interface DataStack : NSObject
/// The context for the main queue. Please do not use this to mutate data, use <code>performInNewBackgroundContext</code>
/// instead.
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull mainContext;
/// The context for the main queue. Please do not use this to mutate data, use <code>performBackgroundTask</code>
/// instead.
@property (nonatomic, readonly, strong) NSManagedObjectContext * _Nonnull viewContext;
/// Initializes a DataStack using the bundle name as the model name, so if your target is called ModernApp,
/// it will look for a ModernApp.xcdatamodeld.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name.
/// \param modelName The name of your Core Data model (xcdatamodeld).
///
- (nonnull instancetype)initWithModelName:(NSString * _Nonnull)modelName OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name, bundle and storeType.
/// \param modelName The name of your Core Data model (xcdatamodeld).
///
/// \param storeType The store type to be used, you have .InMemory and .SQLite, the first one is memory
/// based and doesn’t save to disk, while the second one creates a .sqlite file and stores things there.
///
- (nonnull instancetype)initWithModelName:(NSString * _Nonnull)modelName storeType:(enum DataStackStoreType)storeType OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name, bundle and storeType.
/// \param modelName The name of your Core Data model (xcdatamodeld).
///
/// \param bundle The bundle where your Core Data model is located, normally your Core Data model is in
/// the main bundle but when using unit tests sometimes your Core Data model could be located where your tests
/// are located.
///
/// \param storeType The store type to be used, you have .InMemory and .SQLite, the first one is memory
/// based and doesn’t save to disk, while the second one creates a .sqlite file and stores things there.
///
- (nonnull instancetype)initWithModelName:(NSString * _Nonnull)modelName bundle:(NSBundle * _Nonnull)bundle storeType:(enum DataStackStoreType)storeType OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name, bundle, storeType and store name.
/// \param modelName The name of your Core Data model (xcdatamodeld).
///
/// \param bundle The bundle where your Core Data model is located, normally your Core Data model is in
/// the main bundle but when using unit tests sometimes your Core Data model could be located where your tests
/// are located.
///
/// \param storeType The store type to be used, you have .InMemory and .SQLite, the first one is memory
/// based and doesn’t save to disk, while the second one creates a .sqlite file and stores things there.
///
/// \param storeName Normally your file would be named as your model name is named, so if your model
/// name is AwesomeApp then the .sqlite file will be named AwesomeApp.sqlite, this attribute allows your to
/// change that.
///
- (nonnull instancetype)initWithModelName:(NSString * _Nonnull)modelName bundle:(NSBundle * _Nonnull)bundle storeType:(enum DataStackStoreType)storeType storeName:(NSString * _Nonnull)storeName OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name, bundle, storeType and store name.
/// \param modelName The name of your Core Data model (xcdatamodeld).
///
/// \param bundle The bundle where your Core Data model is located, normally your Core Data model is in
/// the main bundle but when using unit tests sometimes your Core Data model could be located where your tests
/// are located.
///
/// \param storeType The store type to be used, you have .InMemory and .SQLite, the first one is memory
/// based and doesn’t save to disk, while the second one creates a .sqlite file and stores things there.
///
/// \param storeName Normally your file would be named as your model name is named, so if your model
/// name is AwesomeApp then the .sqlite file will be named AwesomeApp.sqlite, this attribute allows your to
/// change that.
///
/// \param containerURL The container URL for the sqlite file when a store type of SQLite is used.
///
- (nonnull instancetype)initWithModelName:(NSString * _Nonnull)modelName bundle:(NSBundle * _Nonnull)bundle storeType:(enum DataStackStoreType)storeType storeName:(NSString * _Nonnull)storeName containerURL:(NSURL * _Nonnull)containerURL OBJC_DESIGNATED_INITIALIZER;
/// Initializes a DataStack using the provided model name, bundle and storeType.
/// \param model The model that we’ll use to set up your DataStack.
///
/// \param storeType The store type to be used, you have .InMemory and .SQLite, the first one is memory
/// based and doesn’t save to disk, while the second one creates a .sqlite file and stores things there.
///
- (nonnull instancetype)initWithModel:(NSManagedObjectModel * _Nonnull)model storeType:(enum DataStackStoreType)storeType OBJC_DESIGNATED_INITIALIZER;
/// Returns a new main context that is detached from saving to disk.
- (NSManagedObjectContext * _Nonnull)newDisposableMainContext SWIFT_WARN_UNUSED_RESULT;
/// Returns a background context perfect for data mutability operations. Make sure to never use it on the main thread. Use <code>performBlock</code> or <code>performBlockAndWait</code> to use it.
/// Saving to this context doesn’t merge with the main thread. This context is specially useful to run operations that don’t block the main thread. To refresh your main thread objects for
/// example when using a NSFetchedResultsController use <code>try self.fetchedResultsController.performFetch()</code>.
- (NSManagedObjectContext * _Nonnull)newNonMergingBackgroundContext SWIFT_WARN_UNUSED_RESULT;
/// Returns a background context perfect for data mutability operations. Make sure to never use it on the main thread. Use <code>performBlock</code> or <code>performBlockAndWait</code> to use it.
- (NSManagedObjectContext * _Nonnull)newBackgroundContext SWIFT_WARN_UNUSED_RESULT;
/// Returns a background context perfect for data mutability operations.
/// \param operation The block that contains the created background context.
///
- (void)performInNewBackgroundContext:(void (^ _Nonnull)(NSManagedObjectContext * _Nonnull))operation;
/// Returns a background context perfect for data mutability operations.
/// \param operation The block that contains the created background context.
///
- (void)performBackgroundTaskWithOperation:(void (^ _Nonnull)(NSManagedObjectContext * _Nonnull))operation;
/// Drops the database.
- (void)dropWithCompletion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Sends a request to all the persistent stores associated with the receiver.
/// \param request A fetch, save or delete request.
///
/// \param context The context against which request should be executed.
///
///
/// throws:
/// If an error occurs, upon return contains an NSError object that describes the problem.
///
/// returns:
/// An array containing managed objects, managed object IDs, or dictionaries as appropriate for a fetch request; an empty array if request is a save request, or nil if an error occurred.
- (id _Nullable)execute:(NSPersistentStoreRequest * _Nonnull)request with:(NSManagedObjectContext * _Nonnull)context error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end

@class NSPredicate;
@class NSManagedObject;

@interface DataStack (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in account in the Sync process, you just need to provide this predicate.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param parent The parent of the synced items, useful if you are syncing the childs of an object, for example
/// an Album has many photos, if this photos don’t incldue the album’s JSON object, syncing the photos JSON requires
/// you to send the parent album to do the proper mapping.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName parent:(NSManagedObject * _Nonnull)parent completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Deletes a managed object for the provided primary key in an specific entity.
/// \param id The primary key.
///
/// \param entityName The name of the entity.
///
///
/// throws:
/// Core Data related issues.
- (BOOL)delete:(id _Nonnull)id inEntityNamed:(NSString * _Nonnull)entityName error:(NSError * _Nullable * _Nullable)error;
@end

typedef SWIFT_ENUM(NSInteger, DataStackStoreType) {
  DataStackStoreTypeInMemory = 0,
  DataStackStoreTypeSqLite = 1,
};


@interface NSDateFormatter (SWIFT_EXTENSION(Sync))
@end


@interface NSArray (SWIFT_EXTENSION(Sync))
@end


@interface NSEntityDescription (SWIFT_EXTENSION(Sync))
@end


@interface NSError (SWIFT_EXTENSION(Sync))
@end


@interface NSManagedObject (SWIFT_EXTENSION(Sync))
/// Fills the <code>NSManagedObject</code> with the contents of the dictionary using a convention-over-configuration paradigm mapping the Core Data attributes to their conterparts in JSON using snake_case.
///
/// returns:
/// The JSON dictionary to be used to fill the values of your <code>NSManagedObject</code>.
- (NSDictionary<NSString *, id> * _Nonnull)export SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSManagedObject (SWIFT_EXTENSION(Sync))
@end

@class NSManagedObjectID;

@interface NSManagedObjectContext (SWIFT_EXTENSION(Sync))
/// Safely fetches a NSManagedObject in the current context. If no localPrimaryKey is provided then it will check for the parent entity and use that. Otherwise it will return nil.
/// \param entityName The name of the Core Data entity.
///
/// \param localPrimaryKey The primary key.
///
/// \param parent The parent of the object.
///
/// \param parentRelationshipName The name of the relationship with the parent.
///
///
/// returns:
/// A NSManagedObject contained in the provided context.
- (NSManagedObject * _Nullable)safeObject:(NSString * _Nonnull)entityName localPrimaryKey:(id _Nullable)localPrimaryKey parent:(NSManagedObject * _Nullable)parent parentRelationshipName:(NSString * _Nullable)parentRelationshipName SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<id <NSCopying>, NSManagedObjectID *> * _Nonnull)managedObjectIDsIn:(NSString * _Nonnull)entityName usingAsKey:(NSString * _Nonnull)attributeName predicate:(NSPredicate * _Nullable)predicate SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSManagedObjectContext (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in account in the Sync process, you just need to provide this predicate.
///
/// \param parent The parent of the synced items, useful if you are syncing the childs of an object, for example an Album has many photos, if this photos don’t incldue the album’s JSON object.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate parent:(NSManagedObject * _Nullable)parent completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Deletes a managed object for the provided primary key in an specific entity.
/// \param id The primary key.
///
/// \param entityName The name of the entity.
///
///
/// throws:
/// Core Data related issues.
- (BOOL)delete:(id _Nonnull)id inEntityNamed:(NSString * _Nonnull)entityName error:(NSError * _Nullable * _Nullable)error;
@end


@interface NSManagedObjectModel (SWIFT_EXTENSION(Sync))
@end


@interface NSPersistentContainer (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName completion:(void (^ _Nullable)(NSError * _Nullable))completion SWIFT_AVAILABILITY(macos,introduced=10.12) SWIFT_AVAILABILITY(tvos,introduced=10) SWIFT_AVAILABILITY(watchos,introduced=3) SWIFT_AVAILABILITY(ios,introduced=10);
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in
/// account in the Sync process, you just need to provide this predicate.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
- (void)sync:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate completion:(void (^ _Nullable)(NSError * _Nullable))completion SWIFT_AVAILABILITY(macos,introduced=10.12) SWIFT_AVAILABILITY(tvos,introduced=10) SWIFT_AVAILABILITY(watchos,introduced=3) SWIFT_AVAILABILITY(ios,introduced=10);
/// Deletes a managed object for the provided primary key in an specific entity.
/// \param id The primary key.
///
/// \param entityName The name of the entity.
///
/// \param completion The completion block.
///
- (void)delete:(id _Nonnull)id inEntityNamed:(NSString * _Nonnull)entityName completion:(void (^ _Nonnull)(NSError * _Nullable))completion SWIFT_AVAILABILITY(macos,introduced=10.12) SWIFT_AVAILABILITY(tvos,introduced=10) SWIFT_AVAILABILITY(watchos,introduced=3) SWIFT_AVAILABILITY(ios,introduced=10);
/// Deletes a managed object for the provided primary key in an specific entity.
/// \param id The primary key.
///
/// \param entityName The name of the entity.
///
///
/// throws:
/// Core Data related issues.
- (BOOL)delete:(id _Nonnull)id inEntityNamed:(NSString * _Nonnull)entityName using:(NSManagedObjectContext * _Nonnull)context error:(NSError * _Nullable * _Nullable)error;
@end


@interface NSPersistentStoreCoordinator (SWIFT_EXTENSION(Sync))
@end


SWIFT_CLASS("_TtC4Sync4Sync")
@interface Sync : NSOperation
@property (nonatomic, readonly, getter=isFinished) BOOL finished;
@property (nonatomic, readonly, getter=isExecuting) BOOL executing;
@property (nonatomic, readonly, getter=isCancelled) BOOL cancelled;
@property (nonatomic, readonly, getter=isAsynchronous) BOOL asynchronous;
- (void)start;
- (void)cancel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Sync (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in
/// account in the Sync process, you just need to provide this predicate.
///
/// \param persistentContainer The NSPersistentContainer instance.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate persistentContainer:(NSPersistentContainer * _Nonnull)persistentContainer completion:(void (^ _Nullable)(NSError * _Nullable))completion SWIFT_AVAILABILITY(macos,introduced=10.12) SWIFT_AVAILABILITY(tvos,introduced=10) SWIFT_AVAILABILITY(watchos,introduced=3) SWIFT_AVAILABILITY(ios,introduced=10);
@end


@interface Sync (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param context The Core Data context to be used.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName inContext:(NSManagedObjectContext * _Nonnull)context completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in
/// account in the Sync process, you just need to provide this predicate.
///
/// \param parent The parent of the synced items, useful if you are syncing the childs of an object, for example
/// an Album has many photos, if this photos don’t incldue the album’s JSON object, syncing the photos JSON requires
///
/// \param context The context where the items will be created, in general this should be a background context.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate parent:(NSManagedObject * _Nullable)parent inContext:(NSManagedObjectContext * _Nonnull)context completion:(void (^ _Nullable)(NSError * _Nullable))completion;
@end


@interface Sync (SWIFT_EXTENSION(Sync))
/// Deletes a managed object for the provided primary key in an specific entity.
/// \param id The primary key.
///
/// \param entityName The name of the entity.
///
/// \param context The context to be used, make sure that this method gets called in the same thread as the context using <code>perform</code> or <code>performAndWait</code>.
///
///
/// throws:
/// Core Data related issues.
+ (BOOL)delete:(id _Nonnull)id inEntityNamed:(NSString * _Nonnull)entityName using:(NSManagedObjectContext * _Nonnull)context error:(NSError * _Nullable * _Nullable)error;
@end


@interface Sync (SWIFT_EXTENSION(Sync))
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param dataStack The DataStack instance.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName dataStack:(DataStack * _Nonnull)dataStack completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param predicate The predicate used to filter out changes, if you want to exclude some local items to be taken in
/// account in the Sync process, you just need to provide this predicate.
///
/// \param dataStack The DataStack instance.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName predicate:(NSPredicate * _Nullable)predicate dataStack:(DataStack * _Nonnull)dataStack completion:(void (^ _Nullable)(NSError * _Nullable))completion;
/// Syncs the entity using the received array of dictionaries, maps one-to-many, many-to-many and one-to-one relationships.
/// It also syncs relationships where only the id is present, for example if your model is: Company -> Employee,
/// and your employee has a company_id, it will try to sync using that ID instead of requiring you to provide the
/// entire company object inside the employees dictionary.
/// \param changes The array of dictionaries used in the sync process.
///
/// \param entityName The name of the entity to be synced.
///
/// \param parent The parent of the synced items, useful if you are syncing the childs of an object, for example
/// an Album has many photos, if this photos don’t incldue the album’s JSON object, syncing the photos JSON requires
/// you to send the parent album to do the proper mapping.
///
/// \param dataStack The DataStack instance.
///
/// \param completion The completion block, it returns an error if something in the Sync process goes wrong.
///
+ (void)changes:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)changes inEntityNamed:(NSString * _Nonnull)entityName parent:(NSManagedObject * _Nonnull)parent dataStack:(DataStack * _Nonnull)dataStack completion:(void (^ _Nullable)(NSError * _Nullable))completion;
@end


SWIFT_CLASS("_TtC4Sync9TestCheck")
@interface TestCheck : NSObject
/// Method to check wheter your on testing mode or not.
///
/// returns:
/// A Bool, <code>true</code> if you’re on testing mode, <code>false</code> if you’re not.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isTesting;)
+ (BOOL)isTesting SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
