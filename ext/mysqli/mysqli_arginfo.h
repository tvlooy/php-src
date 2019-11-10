/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, database, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, socket, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_autocommit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, mode, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_begin_transaction, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_change_user, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_character_set_name, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_close, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_commit arginfo_class_mysqli_begin_transaction

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_mysqli_connect, 0, 0, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, passwd, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, socket, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_dump_debug_info arginfo_class_mysqli_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_debug, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, debug, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_get_charset, 0, 0, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_get_client_info arginfo_class_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_get_connection_stats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_get_server_info arginfo_class_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_mysqli_get_warnings, 0, 0, mysqli_warning, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_mysqli_init, 0, 0, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_kill, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, processid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_multi_query, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_more_results arginfo_class_mysqli_close

#define arginfo_class_mysqli_next_result arginfo_class_mysqli_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_options, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, mysql_option, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_value, mixed, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_ping arginfo_class_mysqli_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_poll, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r_array, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, e_array, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, dont_poll_array, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, sec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_prepare, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_query, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, resultmode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_mysqli_real_connect, 0, 0, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, passwd, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_real_escape_string, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, escapestr, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_reap_async_query, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_escape_string arginfo_class_mysqli_real_escape_string

#define arginfo_class_mysqli_real_query arginfo_class_mysqli_multi_query

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_release_savepoint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_rollback arginfo_class_mysqli_begin_transaction

#define arginfo_class_mysqli_savepoint arginfo_class_mysqli_release_savepoint

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_select_db, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_set_charset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cs_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_options arginfo_class_mysqli_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_ssl_set, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm4, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stat arginfo_class_mysqli_reap_async_query

#define arginfo_class_mysqli_stmt_init arginfo_class_mysqli_reap_async_query

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_store_result, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_thread_safe arginfo_class_mysqli_close

#define arginfo_class_mysqli_use_result arginfo_class_mysqli_reap_async_query

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_refresh, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_warning___construct arginfo_class_mysqli_reap_async_query

#define arginfo_class_mysqli_warning_next arginfo_class_mysqli_close

#define arginfo_class_mysqli_result___construct arginfo_class_mysqli_reap_async_query

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_close, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_free arginfo_class_mysqli_result_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_data_seek, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_fetch_field arginfo_class_mysqli_reap_async_query

#define arginfo_class_mysqli_result_fetch_fields arginfo_class_mysqli_get_connection_stats

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_result_fetch_field_direct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_result_fetch_all, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_result_fetch_array, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, fetchtype, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_fetch_assoc arginfo_class_mysqli_get_connection_stats

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_fetch_object, 0, 0, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, class_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ctor_params, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_fetch_row arginfo_class_mysqli_get_connection_stats

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_field_seek, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fieldnr, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_free_result arginfo_class_mysqli_result_close

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_stmt___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, statement, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_stmt_attr_get, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, attr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_attr_set, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, attr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode_in, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_bind_param, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, types, IS_STRING, 0)
	ZEND_ARG_VARIADIC_OBJ_INFO(0, variable, mixed, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_bind_result, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_VARIADIC_OBJ_INFO(0, variable, mixed, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stmt_close arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_data_seek arginfo_class_mysqli_result_fetch_field_direct

#define arginfo_class_mysqli_stmt_execute arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_fetch arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_get_warnings arginfo_class_mysqli_get_warnings

#define arginfo_class_mysqli_stmt_result_metadata arginfo_class_mysqli_reap_async_query

#define arginfo_class_mysqli_stmt_more_results arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_next_result arginfo_class_mysqli_close

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_num_rows, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_send_long_data, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, param_nr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stmt_free_result arginfo_class_mysqli_result_close

#define arginfo_class_mysqli_stmt_reset arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_prepare arginfo_class_mysqli_multi_query

#define arginfo_class_mysqli_stmt_store_result arginfo_class_mysqli_close

#define arginfo_class_mysqli_stmt_get_result arginfo_class_mysqli_reap_async_query

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_affected_rows, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_autocommit, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, automode, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_begin_transaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_change_user, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_character_set_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_close, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_commit arginfo_mysqli_begin_transaction

#define arginfo_mysqli_connect arginfo_class_mysqli_connect

#define arginfo_mysqli_connect_errno arginfo_class_mysqli_stmt_num_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_connect_error, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_data_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_dump_debug_info arginfo_mysqli_close

#define arginfo_mysqli_debug arginfo_class_mysqli_debug

#define arginfo_mysqli_errno arginfo_mysqli_affected_rows

#define arginfo_mysqli_error arginfo_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_error_list, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_execute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_execute arginfo_mysqli_stmt_execute

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_fetch_field, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_fetch_fields, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_fetch_field_direct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_fetch_lengths arginfo_mysqli_fetch_field

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_fetch_all, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_fetch_array, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, fetchtype, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_fetch_assoc arginfo_mysqli_fetch_fields

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_fetch_object, 0, 1, IS_OBJECT, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, class_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ctor_params, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_fetch_row, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_field_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_field_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, fieldnr, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_field_tell arginfo_mysqli_field_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_free_result, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_connection_stats, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_client_stats arginfo_mysqli_get_connection_stats

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_charset, 0, 1, IS_OBJECT, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_client_info arginfo_class_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_client_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_links_stats arginfo_mysqli_get_connection_stats

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_host_info, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_proto_info arginfo_mysqli_get_client_version

#define arginfo_mysqli_get_server_info arginfo_mysqli_get_host_info

#define arginfo_mysqli_get_server_version arginfo_mysqli_get_client_version

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_mysqli_get_warnings, 0, 1, mysqli_warning, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_init arginfo_class_mysqli_init

#define arginfo_mysqli_info arginfo_mysqli_get_host_info

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_insert_id, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_kill, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, processid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_more_results, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_multi_query, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_next_result arginfo_mysqli_more_results

#define arginfo_mysqli_num_fields arginfo_mysqli_get_client_version

#define arginfo_mysqli_num_rows arginfo_mysqli_insert_id

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_options, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, mysql_option, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_value, mixed, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_ping arginfo_mysqli_more_results

#define arginfo_mysqli_poll arginfo_class_mysqli_poll

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_prepare, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_report, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_query, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, resultmode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_mysqli_real_connect, 0, 1, mysqli, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, passwd, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_real_escape_string, 0, 2, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, escapestr, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_real_query arginfo_mysqli_multi_query

#define arginfo_mysqli_reap_async_query arginfo_mysqli_insert_id

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_release_savepoint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_rollback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_savepoint arginfo_mysqli_release_savepoint

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_select_db, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, dbname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_set_charset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, cs_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_affected_rows, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_stmt_attr_get, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, attr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_attr_set, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, attr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode_in, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_bind_param, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, types, IS_STRING, 0)
	ZEND_ARG_VARIADIC_OBJ_INFO(0, variable, mixed, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_bind_result, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_VARIADIC_OBJ_INFO(0, variable, mixed, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_close arginfo_mysqli_stmt_execute

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_stmt_data_seek, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_errno arginfo_mysqli_stmt_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_error, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_error_list, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_fetch arginfo_mysqli_stmt_execute

#define arginfo_mysqli_stmt_field_count arginfo_mysqli_stmt_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_free_result, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_stmt_get_result, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_mysqli_stmt_get_warnings, 0, 1, mysqli_warning, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_stmt_init, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_insert_id arginfo_mysqli_stmt_affected_rows

#define arginfo_mysqli_stmt_more_results arginfo_mysqli_stmt_execute

#define arginfo_mysqli_stmt_next_result arginfo_mysqli_stmt_execute

#define arginfo_mysqli_stmt_num_rows arginfo_mysqli_stmt_affected_rows

#define arginfo_mysqli_stmt_param_count arginfo_mysqli_stmt_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_prepare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_reset arginfo_mysqli_stmt_execute

#define arginfo_mysqli_stmt_result_metadata arginfo_mysqli_stmt_get_result

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_send_long_data, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_stmt, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, param_nr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_store_result arginfo_mysqli_stmt_execute

#define arginfo_mysqli_stmt_sqlstate arginfo_mysqli_stmt_error

#define arginfo_mysqli_sqlstate arginfo_mysqli_get_host_info

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_ssl_set, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ssl_parm4, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stat arginfo_mysqli_stmt_init

ZEND_BEGIN_ARG_INFO_EX(arginfo_mysqli_store_result, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_thread_id arginfo_mysqli_affected_rows

#define arginfo_mysqli_thread_safe arginfo_class_mysqli_close

#define arginfo_mysqli_use_result arginfo_mysqli_stmt_init

#define arginfo_mysqli_warning_count arginfo_mysqli_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_refresh, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysqli_link, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_escape_string arginfo_mysqli_real_escape_string

#define arginfo_mysqli_set_opt arginfo_mysqli_options
