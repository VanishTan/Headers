//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (KSORM)
+ (_Bool)ksorm_persistIgnoredPropertyName:(id)arg1;
+ (id)ksorm_tableName;
+ (id)ksorm_objectsWithResultSet:(id)arg1;
+ (id)ksorm_objectWithResultSet:(id)arg1;
- (id)ksorm_customValueForProperty:(id)arg1 withSqlValue:(id)arg2;
- (id)ksorm_customSqlTypeForPropertyName:(id)arg1;
- (id)ksorm_customSqlValueForPropertyName:(id)arg1;
- (id)ksorm_validPropertyNames;
- (id)ksorm_validProperties;
- (void)ksorm_completeWithResultSet:(id)arg1;
- (id)ksorm_SQLDeleteWithObjectID:(id)arg1;
- (id)ksorm_SQLInsertWithObjectID:(id)arg1;
- (id)ksorm_SQLUpdateWithObjectID:(id)arg1;
- (id)ksorm_SQLColumns;
- (id)ksorm_properties;
@end

