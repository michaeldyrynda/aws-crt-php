/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5549e1214a9a419075f5cb561adb2d7a340c5916 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_last_error, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_error_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, error_code, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_aws_crt_error_str arginfo_aws_crt_error_name

#define arginfo_aws_crt_error_debug_str arginfo_aws_crt_error_name

#define arginfo_aws_crt_event_loop_group_options_new arginfo_aws_crt_last_error

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_event_loop_group_options_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, elg_options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_event_loop_group_options_set_max_threads, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, elg_options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_threads, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_event_loop_group_new, 0, 1, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_event_loop_group_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event_loop_group, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_options_new, 0, 0, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_options_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_options_set_user_data, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

#define arginfo_aws_crt_input_stream_new arginfo_aws_crt_event_loop_group_new

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_seek, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, basis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_read, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_eof, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_input_stream_get_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_aws_crt_credentials_options_new arginfo_aws_crt_input_stream_options_new

#define arginfo_aws_crt_credentials_options_release arginfo_aws_crt_input_stream_options_release

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_options_set_access_key_id, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, access_key_id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_options_set_secret_access_key, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, secret_access_key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_options_set_session_token, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, session_token, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_options_set_expiration_timepoint_seconds, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, expiration_timepoint_seconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_aws_crt_credentials_new arginfo_aws_crt_event_loop_group_new

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, credentials, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_aws_crt_credentials_provider_release, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, credentials, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_aws_crt_credentials_provider_static_options_new arginfo_aws_crt_input_stream_options_new

#define arginfo_aws_crt_credentials_provider_static_options_release arginfo_aws_crt_input_stream_options_release

#define arginfo_aws_crt_credentials_provider_static_options_set_access_key_id arginfo_aws_crt_credentials_options_set_access_key_id

#define arginfo_aws_crt_credentials_provider_static_options_set_secret_access_key arginfo_aws_crt_credentials_options_set_secret_access_key

#define arginfo_aws_crt_credentials_provider_static_options_set_session_token arginfo_aws_crt_credentials_options_set_session_token

#define arginfo_aws_crt_credentials_provider_static_new arginfo_aws_crt_event_loop_group_new


ZEND_FUNCTION(aws_crt_last_error);
ZEND_FUNCTION(aws_crt_error_name);
ZEND_FUNCTION(aws_crt_error_str);
ZEND_FUNCTION(aws_crt_error_debug_str);
ZEND_FUNCTION(aws_crt_event_loop_group_options_new);
ZEND_FUNCTION(aws_crt_event_loop_group_options_release);
ZEND_FUNCTION(aws_crt_event_loop_group_options_set_max_threads);
ZEND_FUNCTION(aws_crt_event_loop_group_new);
ZEND_FUNCTION(aws_crt_event_loop_group_release);
ZEND_FUNCTION(aws_crt_input_stream_options_new);
ZEND_FUNCTION(aws_crt_input_stream_options_release);
ZEND_FUNCTION(aws_crt_input_stream_options_set_user_data);
ZEND_FUNCTION(aws_crt_input_stream_new);
ZEND_FUNCTION(aws_crt_input_stream_release);
ZEND_FUNCTION(aws_crt_input_stream_seek);
ZEND_FUNCTION(aws_crt_input_stream_read);
ZEND_FUNCTION(aws_crt_input_stream_eof);
ZEND_FUNCTION(aws_crt_input_stream_get_length);
ZEND_FUNCTION(aws_crt_credentials_options_new);
ZEND_FUNCTION(aws_crt_credentials_options_release);
ZEND_FUNCTION(aws_crt_credentials_options_set_access_key_id);
ZEND_FUNCTION(aws_crt_credentials_options_set_secret_access_key);
ZEND_FUNCTION(aws_crt_credentials_options_set_session_token);
ZEND_FUNCTION(aws_crt_credentials_options_set_expiration_timepoint_seconds);
ZEND_FUNCTION(aws_crt_credentials_new);
ZEND_FUNCTION(aws_crt_credentials_release);
ZEND_FUNCTION(aws_crt_credentials_provider_release);
ZEND_FUNCTION(aws_crt_credentials_provider_static_options_new);
ZEND_FUNCTION(aws_crt_credentials_provider_static_options_release);
ZEND_FUNCTION(aws_crt_credentials_provider_static_options_set_access_key_id);
ZEND_FUNCTION(aws_crt_credentials_provider_static_options_set_secret_access_key);
ZEND_FUNCTION(aws_crt_credentials_provider_static_options_set_session_token);
ZEND_FUNCTION(aws_crt_credentials_provider_static_new);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(aws_crt_last_error, arginfo_aws_crt_last_error)
	ZEND_FE(aws_crt_error_name, arginfo_aws_crt_error_name)
	ZEND_FE(aws_crt_error_str, arginfo_aws_crt_error_str)
	ZEND_FE(aws_crt_error_debug_str, arginfo_aws_crt_error_debug_str)
	ZEND_FE(aws_crt_event_loop_group_options_new, arginfo_aws_crt_event_loop_group_options_new)
	ZEND_FE(aws_crt_event_loop_group_options_release, arginfo_aws_crt_event_loop_group_options_release)
	ZEND_FE(aws_crt_event_loop_group_options_set_max_threads, arginfo_aws_crt_event_loop_group_options_set_max_threads)
	ZEND_FE(aws_crt_event_loop_group_new, arginfo_aws_crt_event_loop_group_new)
	ZEND_FE(aws_crt_event_loop_group_release, arginfo_aws_crt_event_loop_group_release)
	ZEND_FE(aws_crt_input_stream_options_new, arginfo_aws_crt_input_stream_options_new)
	ZEND_FE(aws_crt_input_stream_options_release, arginfo_aws_crt_input_stream_options_release)
	ZEND_FE(aws_crt_input_stream_options_set_user_data, arginfo_aws_crt_input_stream_options_set_user_data)
	ZEND_FE(aws_crt_input_stream_new, arginfo_aws_crt_input_stream_new)
	ZEND_FE(aws_crt_input_stream_release, arginfo_aws_crt_input_stream_release)
	ZEND_FE(aws_crt_input_stream_seek, arginfo_aws_crt_input_stream_seek)
	ZEND_FE(aws_crt_input_stream_read, arginfo_aws_crt_input_stream_read)
	ZEND_FE(aws_crt_input_stream_eof, arginfo_aws_crt_input_stream_eof)
	ZEND_FE(aws_crt_input_stream_get_length, arginfo_aws_crt_input_stream_get_length)
	ZEND_FE(aws_crt_credentials_options_new, arginfo_aws_crt_credentials_options_new)
	ZEND_FE(aws_crt_credentials_options_release, arginfo_aws_crt_credentials_options_release)
	ZEND_FE(aws_crt_credentials_options_set_access_key_id, arginfo_aws_crt_credentials_options_set_access_key_id)
	ZEND_FE(aws_crt_credentials_options_set_secret_access_key, arginfo_aws_crt_credentials_options_set_secret_access_key)
	ZEND_FE(aws_crt_credentials_options_set_session_token, arginfo_aws_crt_credentials_options_set_session_token)
	ZEND_FE(aws_crt_credentials_options_set_expiration_timepoint_seconds, arginfo_aws_crt_credentials_options_set_expiration_timepoint_seconds)
	ZEND_FE(aws_crt_credentials_new, arginfo_aws_crt_credentials_new)
	ZEND_FE(aws_crt_credentials_release, arginfo_aws_crt_credentials_release)
	ZEND_FE(aws_crt_credentials_provider_release, arginfo_aws_crt_credentials_provider_release)
	ZEND_FE(aws_crt_credentials_provider_static_options_new, arginfo_aws_crt_credentials_provider_static_options_new)
	ZEND_FE(aws_crt_credentials_provider_static_options_release, arginfo_aws_crt_credentials_provider_static_options_release)
	ZEND_FE(aws_crt_credentials_provider_static_options_set_access_key_id, arginfo_aws_crt_credentials_provider_static_options_set_access_key_id)
	ZEND_FE(aws_crt_credentials_provider_static_options_set_secret_access_key, arginfo_aws_crt_credentials_provider_static_options_set_secret_access_key)
	ZEND_FE(aws_crt_credentials_provider_static_options_set_session_token, arginfo_aws_crt_credentials_provider_static_options_set_session_token)
	ZEND_FE(aws_crt_credentials_provider_static_new, arginfo_aws_crt_credentials_provider_static_new)
	ZEND_FE_END
};