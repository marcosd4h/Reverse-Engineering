#pragma once
#include "ntbase.h"

//////////////////////////////////////////////////////////////////////////

enum NT_SECURITY_PRIVILEGES : UINT32
{
    SE_MIN_WELL_KNOWN_PRIVILEGE = 2L,
    SE_CREATE_TOKEN_PRIVILEGE = 2L,
    SE_ASSIGNPRIMARYTOKEN_PRIVILEGE = 3L,
    SE_LOCK_MEMORY_PRIVILEGE = 4L,
    SE_INCREASE_QUOTA_PRIVILEGE = 5L,
    SE_MACHINE_ACCOUNT_PRIVILEGE = 6L,
    SE_TCB_PRIVILEGE = 7L,
    SE_SECURITY_PRIVILEGE = 8L,
    SE_TAKE_OWNERSHIP_PRIVILEGE = 9L,
    SE_LOAD_DRIVER_PRIVILEGE = 10L,
    SE_SYSTEM_PROFILE_PRIVILEGE = 11L,
    SE_SYSTEMTIME_PRIVILEGE = 12L,
    SE_PROF_SINGLE_PROCESS_PRIVILEGE = 13L,
    SE_INC_BASE_PRIORITY_PRIVILEGE = 14L,
    SE_CREATE_PAGEFILE_PRIVILEGE = 15L,
    SE_CREATE_PERMANENT_PRIVILEGE = 16L,
    SE_BACKUP_PRIVILEGE = 17L,
    SE_RESTORE_PRIVILEGE = 18L,
    SE_SHUTDOWN_PRIVILEGE = 19L,
    SE_DEBUG_PRIVILEGE = 20L,
    SE_AUDIT_PRIVILEGE = 21L,
    SE_SYSTEM_ENVIRONMENT_PRIVILEGE = 22L,
    SE_CHANGE_NOTIFY_PRIVILEGE = 23L,
    SE_REMOTE_SHUTDOWN_PRIVILEGE = 24L,
    SE_UNDOCK_PRIVILEGE = 25L,
    SE_SYNC_AGENT_PRIVILEGE = 26L,
    SE_ENABLE_DELEGATION_PRIVILEGE = 27L,
    SE_MANAGE_VOLUME_PRIVILEGE = 28L,
    SE_IMPERSONATE_PRIVILEGE = 29L,
    SE_CREATE_GLOBAL_PRIVILEGE = 30L,
    SE_TRUSTED_CREDMAN_ACCESS_PRIVILEGE = 31L,
    SE_RELABEL_PRIVILEGE = 32L,
    SE_INC_WORKING_SET_PRIVILEGE = 33L,
    SE_TIME_ZONE_PRIVILEGE = 34L,
    SE_CREATE_SYMBOLIC_LINK_PRIVILEGE = 35L,
    SE_DELEGATE_SESSION_USER_IMPERSONATE_PRIVILEGE = 36L,
    SE_MAX_WELL_KNOWN_PRIVILEGE = SE_DELEGATE_SESSION_USER_IMPERSONATE_PRIVILEGE,
};
