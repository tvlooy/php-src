<?php

class mysqli_driver
{
}

class mysqli
{
    /**
     * @param ?string $hostname
     * @param ?string $username
     * @param ?string $passwd
     * @param ?string $dbname
     * @param ?int $port
     * @param ?string $socket
     */
    public function __construct(?string $hostname = null, ?string $username = null, ?string $passwd = null, ?string $dbname = null, ?int $port = null, ?string $socket = null);

    /**
     * @param bool $automode
     *
     * @return bool
     */
    public function autocommit(bool $automode): bool;

    /**
     * @param int $flags
     * @param string $name
     *
     * @return bool
     */
	public function begin_transaction(int $flags = 0, string $name = ''): bool;

	/**
	 * @param string $user
	 * @param string $password
	 * @param ?string $dbname
	 *
	 * @return bool
	 */
	public function change_user(string $user, string $password, ?string $dbname): bool;

	/**
	 * @return string
	 */
	public function character_set_name(): string;

    /**
     * @return bool
     */
	public function close(): bool;

	/**
	 * @param int $flags
	 * @param string $name
	 *
	 * @return bool
	 */
	public function commit(int $flags = 0, string $name = ''): bool;

    /**
     * @param ?string $hostname
     * @param ?string $username
     * @param ?string $passwd
     * @param ?string $dbname
     * @param ?int $port
     * @param ?string $socket
     *
     * @return mysqli
     */
	public function connect(?string $hostname = null, ?string $username = null, ?string $passwd = null, ?string $dbname = null, ?int $port = null, ?string $socket = null): mysqli;

    /**
     * @return bool
     */
	public function dump_debug_info(): bool;

	/**
	 * @return bool
	 */
	public function debug(string $debug): bool;

    /**
     * @return object
     */
	public function get_charset(): object;

	/**
	 * @return string
	 */
	public function get_client_info(): string;

	/**
	 * @return array
	 */
	public function get_connection_stats(): array;

	/**
	 * @return string
	 */
	public function get_server_info(): string;

	/**
	 * @return mysqli_warning
	 */
	public function get_warnings(): mysqli_warning;

	/**
	 * @return mysqli
	 */
	public function init(): mysqli;

	/**
	 * @param int $processid
	 *
	 * @return bool
	 */
	public function kill(int $processid): bool;

	/**
	 * @param string $query
	 *
	 * @return bool
	 */
	public function multi_query(string $query): bool;

	/**
	 * @return bool
	 */
	public function more_results(): bool;

	/**
	 * @return bool
	 */
	public function next_result(): bool;

	/**
	 * @param int $mysql_option
	 * @param mixed $mysql_value
	 *
	 * @return bool
	 */
	public function options(int $mysql_option, mixed $mysql_value): bool;

	/**
	 * @return bool
	 */
	public function ping(): bool;

	/**
	 * @param ?array $r_array
	 * @param ?array $e_array
	 * @param ?array $dont_poll_array
	 * @param int $sec
	 * @param int $usec
	 *
	 * @return int
	 */
	public static function poll(?array $r_array, ?array $e_array, ?array $dont_poll_array, int $sec, int $usec = 0): int;

	/**
	 * @return mysqli_stmt|bool
	 */
	public function prepare(string $query);

	/**
	 * @param string $query
	 * @param int $resultmode
	 *
	 * @return mysqli_result|bool
	 */
	public function query(string $query, int $resultmode = MYSQLI_STORE_RESULT);

	/**
	 * @param ?string $hostname
	 * @param ?string $username
	 * @param ?string $passwd
	 * @param ?string $dbname
	 * @param ?int $port
	 * @param ?int $flags
	 *
	 * @return mysqli
	 */
	public function real_connect(?string $hostname = null, ?string $username = null, ?string $passwd = null, ?string $dbname = null, ?int $port = null, ?int $flags = null): mysqli;

	/**
	 * @param string $escapestr
	 *
	 * @return string
	 */
	public function real_escape_string(string $escapestr): string;

	/**
	 * @return mysqli_result|bool
	 */
	public function reap_async_query();

	/**
	 * @param string $escapestr
	 *
	 * @return string
	 */
	public function escape_string(string $escapestr): string;

	/**
	 * @param string $query
	 *
	 * @return bool
	 */
	public function real_query(string $query): bool;

	/**
	 * @param string $name
	 *
	 * @return bool
	 */
	public function release_savepoint(string $name): bool;

	/**
	 * @param int $flags
	 * @param string $name
	 *
	 * @return bool
	 */
	public function rollback(int $flags = 0, string $name = ''): bool;

	/**
	 * @param string $name
	 *
	 * @return bool
	 */
	public function savepoint(string $name): bool;

	/**
	 * @param string $dbname
	 *
	 * @return bool
	 */
	public function select_db(string $dbname): bool;

	/**
	 * @param string $cs_name
	 *
	 * @return bool
	 */
	public function set_charset(string $cs_name): bool;

	/**
	 * @param int $mysql_option
	 * @param mixed $mysql_value
	 *
	 * @return bool
	 */
	public function options(int $mysql_option, mixed $mysql_value): bool;

	/**
	 * @param string $ssl_parm0
	 * @param string $ssl_parm1
	 * @param string $ssl_parm2
	 * @param string $ssl_parm3
	 * @param string $ssl_parm4
	 *
	 * @return bool
	 */
	public function ssl_set(string $ssl_parm0, string $ssl_parm1, string $ssl_parm2, string $ssl_parm3, string $ssl_parm4): bool;

	/**
	 * @return string|bool
	 */
	public function stat();

	/**
	 * @return mysqli_stmt|bool
	 */
	public function stmt_init();

	/**
	 * @param int $flags
	 *
	 * @return mysqli_result|bool
	 */
	public function store_result(int $flags = 0);

	/**
	 * @return bool
	 */
	public function thread_safe(): bool;

	/**
	 * @return mysqli_result|bool
	 */
	public function use_result();

	/**
	 * @param int $options
	 *
	 * @return bool
	 */
	public function refresh(int $options): bool;
}

class mysqli_warning
{
    public function __construct();

	/**
	 * @return bool
	 */
    public function next(): bool;
}

class mysqli_result
{
    public function __construct();

	/**
	 * @return void
	 */
    public function close(): void;

	/**
	 * @return void
	 */
    public function free(): void;

	/**
	 * @param int $offset
	 *
	 * @return bool
	 */
    public function data_seek(int $offset): bool;

	/**
	 * @return object|bool
	 */
    public function fetch_field();

	/**
	 * @return array
	 */
    public function fetch_fields(): array;

	/**
	 * @param int $offset
	 *
	 * @return object|bool
	 */
    public function fetch_field_direct(int $offset);

	/**
	 * @param int $mode
	 *
	 * @return array|bool
	 */
    public function fetch_all(int $mode = MYSQLI_NUM);

	/**
	 * @param int $fetchtype
	 *
	 * @return array|bool
	 */
    public function fetch_array(int $fetchtype = MYSQLI_BOTH);

	/**
	 * @return array
	 */
    public function fetch_assoc(): array;

	/**
	 * @param string $class_name
	 * @param array $ctor_params
	 *
	 * @return object
	 */
    public function fetch_object(string $class_name = 'stdClass', array $ctor_params = []): object;

	/**
	 * @return array
	 */
    public function fetch_row(): array;

	/**
	 * @param int $fieldnr
	 *
	 * @return bool
	 */
    public function field_seek(int $fieldnr): bool;

	/**
	 * @return void
	 */
    public function free_result(): void;
}

class mysqli_stmt
{
	/**
	 * @param mysqli $mysqli_link
	 * @param string $statement
	 */
    public function __construct(mysqli $mysqli_link, string $statement);

	/**
	 * @param int $attr
	 *
	 * @return int|bool
	 */
    public function attr_get(int $attr);

	/**
	 * @param int $attr
	 * @param int $mode_in
	 *
	 * @return bool
	 */
    public function attr_set(int $attr, int $mode_in): bool;

	/**
	 * @param string $types
	 * @param mixed ...$variable
	 *
	 * @return bool
	 */
    public function bind_param(string $types, mixed ...$variable): bool;

	/**
	 * @param mixed ...$variable
	 *
	 * @return bool
	 */
    public function bind_result(mixed ...$variable): bool;

	/**
	 * @return bool
	 */
    public function close(): bool;

	/**
	 * @param int $offset
	 *
	 * @return void|bool
	 */
    public function data_seek(int $offset);

	/**
	 * @return bool
	 */
    public function execute(): bool;

	/**
	 * @return bool
	 */
    public function fetch(): bool;

	/**
	 * @return mysqli_warning
	 */
    public function get_warnings(): mysqli_warning;

	/**
	 * @return mysqli_result|bool
	 */
    public function result_metadata();

	/**
	 * @return bool
	 */
    public function more_results(): bool;

	/**
	 * @return bool
	 */
    public function next_result(): bool;

	/**
	 * @return int
	 */
    public function num_rows(): int;

	/**
	 * @param int $param_nr
	 * @param string $data
	 *
	 * @return bool
	 */
    public function send_long_data(int $param_nr, string $data): bool;

	/**
	 * @return void
	 */
    public function free_result(): void;

	/**
	 * @return bool
	 */
    public function reset(): bool;

	/**
	 * @param string $query
	 *
	 * @return bool
	 */
    public function prepare(string $query): bool;

	/**
	 * @return bool
	 */
    public function store_result(): bool;

	/**
	 * @return mysqli_result|bool
	 */
    public function get_result();
}

class mysqli_sql_exception extends RuntimeException
{
}

/**
 * @param mysqli $mysql_link
 *
 * @return int
 */
function mysqli_affected_rows(mysqli $mysql_link): int {}

/**
 * @param mysqli $mysql_link
 * @param bool $automode
 *
 * @return bool
 */
function mysqli_autocommit(mysqli $mysql_link, bool $automode): bool {}

/**
 * @param mysqli $mysql_link
 * @param int $flags
 * @param string $name
 *
 * @return bool
 */
function mysqli_begin_transaction(mysqli $mysql_link, int $flags = 0, string $name = ''): bool {}

/**
 * @param mysqli $mysql_link
 * @param string $user
 * @param string $password
 * @param ?string $dbname
 *
 * @return bool
 */
function mysqli_change_user(mysqli $mysql_link, string $user, string $password, ?string $dbname): bool {}

/**
 * @param mysqli $mysql_link
 *
 * @return string
 */
function mysqli_character_set_name(mysqli $mysql_link): string {}

/**
 * @param mysqli $mysql_link
 *
 * @return bool
 */
function mysqli_close(mysqli $mysql_link): bool {}

/**
 * @param mysqli $mysql_link
 * @param int $flags
 * @param string $name
 *
 * @return bool
 */
function mysqli_commit(mysqli $mysql_link, int $flags = 0, string $name = ''): bool {}

/**
 * @param ?string $hostname
 * @param ?string $username
 * @param ?string $passwd
 * @param ?string $dbname
 * @param ?int $port
 * @param ?string $socket
 *
 * @return mysqli
 */
function mysqli_connect(?string $hostname = null, ?string $username = null, ?string $passwd = null, ?string $dbname = null, ?int $port = null, ?string $socket = null): mysqli {}

/**
 * @return int
 */
function mysqli_connect_errno(): int {}

/**
 * @return ?string
 */
function mysqli_connect_error(): ?string {}

/**
 * @return mysqli_result $mysql_result
 * @return int $offset
 *
 * @return bool
 */
function mysqli_data_seek(mysqli_result $mysql_result, int $offset): bool {}

/**
 * @param mysqli $mysql_link
 *
 * @return bool
 */
function mysqli_dump_debug_info(mysqli $mysql_link): bool {}

/**
 * @param string $debug
 *
 * @return bool
 */
function mysqli_debug(string $debug): bool {}

/**
 * @param mysqli $mysql_link
 *
 * @return int
 */
function mysqli_errno(mysqli $mysql_link): int {}

/**
 * @param mysqli $mysql_link
 *
 * @return string
 */
function mysqli_error(mysqli $mysql_link): string {}

/**
 * @param mysqli $mysql_link
 *
 * @return array
 */
function mysqli_error_list(mysqli $mysql_link): array {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_execute(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_execute(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_result $mysql_result
 *
 * @return object|bool
 */
function mysqli_fetch_field(mysqli_result $mysql_result) {}

/**
 * @param mysqli_result $mysql_result
 *
 * @return array
 */
function mysqli_fetch_fields(mysqli_result $mysql_result): array {}

/**
 * @param mysqli_result $mysql_result
 * @param int $offset
 *
 * @return object|bool
 */
function mysqli_fetch_field_direct(mysqli_result $mysql_result, int $offset) {}

/**
 * @param mysqli_result $mysql_result
 *
 * @return array|bool
 */
function mysqli_fetch_lengths(mysqli_result $mysql_result) {}

/**
 * @param mysqli_result $mysql_result
 * @param int $mode
 *
 * @return array|bool
 */
function mysqli_fetch_all(mysqli_result $mysql_result, int $mode = MYSQLI_NUM) {}

/**
 * @param mysqli_result $mysql_result
 * @param int $fetchtype
 *
 * @return array|bool
 */
function mysqli_fetch_array(mysqli_result $mysql_result, int $fetchtype = MYSQLI_BOTH) {}

/**
 * @param mysqli_result $mysql_result
 *
 * @return array
 */
function mysqli_fetch_assoc(mysqli_result $mysql_result): array {}

/**
 * @param mysqli_result $mysqli_result
 * @param string $class_name
 * @param array $ctor_params
 *
 * @return object
 */
function mysqli_fetch_object(mysqli_result $mysqli_result, string $class_name = 'stdClass', array $ctor_params = []): object {}

/**
 * @param mysqli_result $mysqli_result
 *
 * @return array
 */
function mysqli_fetch_row(mysqli_result $mysqli_result): array {}

/**
 * @param mysqli_result $mysqli_result
 *
 * @return int
 */
function mysqli_field_count(mysqli_result $mysqli_result): int {}

/**
 * @param mysqli_result $mysqli_result
 * @param int $fieldnr
 *
 * @return bool
 */
function mysqli_field_seek(mysqli_result $mysqli_result, int $fieldnr): bool {}

/**
 * @param mysqli_result $mysqli_result
 *
 * @return int
 */
function mysqli_field_tell(mysqli_result $mysqli_result): int {}

/**
 * @param mysqli_result $mysqli_result
 *
 * @return void
 */
function mysqli_free_result(mysqli_result $mysqli_result): void {}

/**
 * @param mysqli $mysqli_link
 *
 * @return array
 */
function mysqli_get_connection_stats(mysqli $mysqli_link): array {}

/**
 * @param mysqli $mysqli_link
 *
 * @return array
 */
function mysqli_get_client_stats(mysqli $mysqli_link): array {}

/**
 * @param mysqli $mysqli_link
 *
 * @return object
 */
function mysqli_get_charset(mysqli $mysqli_link): object {}

/**
 * @param mysqli $mysqli_link
 *
 * @return string
 */
function mysqli_get_client_info(mysqli $mysqli_link): string {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int
 */
function mysqli_get_client_version(mysqli $mysqli_link): int {}

/**
 * @param mysqli $mysqli_link
 *
 * @return array
 */
function mysqli_get_links_stats(mysqli $mysqli_link): array {}

/**
 * @param mysqli $mysqli_link
 *
 * @return string
 */
function mysqli_get_host_info(mysqli $mysqli_link): string {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int
 */
function mysqli_get_proto_info(mysqli $mysqli_link): int {}

/**
 * @param mysqli $mysqli_link
 *
 * @return string
 */
function mysqli_get_server_info(mysqli $mysqli_link): string {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int
 */
function mysqli_get_server_version(mysqli $mysqli_link): int {}

/**
 * @param mysqli $mysqli_link
 *
 * @return mysqli_warning
 */
function mysqli_get_warnings(mysqli $mysqli_link): mysqli_warning {}

/**
 * @return mysqli
 */
function mysqli_init(): mysqli {}

/**
 * @param mysqli $mysqli_link
 *
 * @return string
 */
function mysqli_info(mysqli $mysqli_link): string {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int|string
 */
function mysqli_insert_id(mysqli $mysqli_link) {}

/**
 * @param mysqli $mysqli_link
 * @param int $processid
 *
 * @return bool
 */
function mysqli_kill(mysqli $mysqli_link, int $processid): bool {}

/**
 * @param mysqli $mysqli_link
 *
 * @return bool
 */
function mysqli_more_results(mysqli $mysqli_link): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $query
 *
 * @return bool
 */
function mysqli_multi_query(mysqli $mysqli_link, string $query): bool {}

/**
 * @param mysqli $mysqli_link
 *
 * @return bool
 */
function mysqli_next_result(mysqli $mysqli_link): bool {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int
 */
function mysqli_num_fields(mysqli $mysqli_link): int {}

/**
 * @param mysqli $mysqli_link
 *
 * @return int|string
 */
function mysqli_num_rows(mysqli $mysqli_link) {}

/**
 * @param mysqli $mysqli_link
 * @param int $mysql_option
 * @param mixed $mysql_value
 *
 * @return bool
 */
function mysqli_options(mysqli $mysqli_link, int $mysql_option, mixed $mysql_value): bool {}

/**
 * @param mysqli $mysqli_link
 *
 * @return bool
 */
function mysqli_ping(mysqli $mysqli_link): bool {}

/**
 * @param ?array $r_array
 * @param ?array $e_array
 * @param ?array $dont_poll_array
 * @param int $sec
 * @param int $usec
 *
 * @return int
 */
function mysqli_poll(?array $r_array, ?array $e_array, ?array $dont_poll_array, int $sec, int $usec = 0): int {}

/**
 * @param mysqli $mysqli_link
 * @param string $query
 *
 * @return mysqli_stmt|bool
 */
function mysqli_prepare(mysqli $mysqli_link, string $query) {}

/**
 * @param int $flags
 *
 * @return bool
 */
function mysqli_report(int $flags): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $query
 * @param int $resultmode
 *
 * @return mysqli_result|bool
 */
function mysqli_query(mysqli $mysqli_link, string $query, int $resultmode = MYSQLI_STORE_RESULT) {}

/**
 * @param mysqli $mysqli_link
 * @param ?string $hostname
 * @param ?string $username
 * @param ?string $passwd
 * @param ?string $dbname
 * @param ?int $port
 * @param ?int $flags
 *
 * @return mysqli
 */
function mysqli_real_connect(mysqli $mysqli_link, ?string $hostname = null, ?string $username = null, ?string $passwd = null, ?string $dbname = null, ?int $port = null, ?int $flags = null): mysqli {}

/**
 * @param mysqli $mysqli_link
 * @param string $escapestr
 *
 * @return string
 */
function mysqli_real_escape_string(mysqli $mysqli_link, string $escapestr): string {}

/**
 * @param mysqli $mysqli_link
 * @param string $query
 *
 * @return bool
 */
function mysqli_real_query(mysqli $mysqli_link, string $query): bool {}

/**
 * @param mysqli $mysqli_link
 *
 * @return mysqli_result|bool
 */
function mysqli_reap_async_query(mysqli $mysqli_link) {}

/**
 * @param mysqli $mysqli_link
 * @param string $name
 *
 * @return bool
 */
function mysqli_release_savepoint(mysqli $mysqli_link, string $name): bool {}

/**
 * @param mysqli $mysqli_link
 * @param int $flags
 * @param string $name
 *
 * @return bool
 */
function mysqli_rollback(mysqli $mysqli_link, int $flags = 0, string $name = ''): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $name
 *
 * @return bool
 */
function mysqli_savepoint(mysqli $mysqli_link, string $name): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $dbname
 *
 * @return bool
 */
function mysqli_select_db(mysqli $mysqli_link, string $dbname): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $cs_name
 *
 * @return bool
 */
function mysqli_set_charset(mysqli $mysqli_link, string $cs_name): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_affected_rows(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param int $attr
 *
 * @return int|bool
 */
function mysqli_stmt_attr_get(mysqli_stmt $mysql_stmt, int $attr) {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param int $attr
 * @param int $mode_in
 *
 * @return bool
 */
function mysqli_stmt_attr_set(mysqli_stmt $mysql_stmt, int $attr, int $mode_in): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param string $types
 * @param mixed ...$variable
 *
 * @return bool
 */
function mysqli_stmt_bind_param(mysqli_stmt $mysql_stmt, string $types, mixed ...$variable): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param mixed ...$variable
 *
 * @return bool
 */
function mysqli_stmt_bind_result(mysqli_stmt $mysql_stmt, mixed ...$variable): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_close(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param int $offset
 *
 * @return void|bool
 */
function mysqli_stmt_data_seek(mysqli_stmt $mysql_stmt, int $offset) {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_errno(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return string
 */
function mysqli_stmt_error(mysqli_stmt $mysql_stmt): string {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return array
 */
function mysqli_stmt_error_list(mysqli_stmt $mysql_stmt): array {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_fetch(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_field_count(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return void
 */
function mysqli_stmt_free_result(mysqli_stmt $mysql_stmt): void {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return mysqli_result|bool
 */
function mysqli_stmt_get_result(mysqli_stmt $mysql_stmt) {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return mysqli_warning
 */
function mysqli_stmt_get_warnings(mysqli_stmt $mysql_stmt): mysqli_warning {}

/**
 * @param mysqli $mysql_link
 *
 * @return mysqli_stmt|bool
 */
function mysqli_stmt_init(mysqli $mysql_link) {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_insert_id(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_more_results(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_next_result(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_num_rows(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return int
 */
function mysqli_stmt_param_count(mysqli_stmt $mysql_stmt): int {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param string $query
 *
 * @return bool
 */
function mysqli_stmt_prepare(mysqli_stmt $mysql_stmt, string $query): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_reset(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return mysqli_result|bool
 */
function mysqli_stmt_result_metadata(mysqli_stmt $mysql_stmt) {}

/**
 * @param mysqli_stmt $mysql_stmt
 * @param int $param_nr
 * @param string $data
 *
 * @return bool
 */
function mysqli_stmt_send_long_data(mysqli_stmt $mysql_stmt, int $param_nr, string $data): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return bool
 */
function mysqli_stmt_store_result(mysqli_stmt $mysql_stmt): bool {}

/**
 * @param mysqli_stmt $mysql_stmt
 *
 * @return string
 */
function mysqli_stmt_sqlstate(mysqli_stmt $mysql_stmt): string {}

/**
 * @param mysqli $mysqli_link
 *
 * @return string
 */
function mysqli_sqlstate(mysqli $mysqli_link): string {}

/**
 * @param mysqli $mysql_link
 * @param string $ssl_parm0
 * @param string $ssl_parm1
 * @param string $ssl_parm2
 * @param string $ssl_parm3
 * @param string $ssl_parm4
 *
 * @return bool
 */
function mysqli_ssl_set(mysqli $mysql_link, string $ssl_parm0, string $ssl_parm1, string $ssl_parm2, string $ssl_parm3, string $ssl_parm4): bool {}

/**
 * @param mysqli $mysql_link
 *
 * @return string|bool
 */
function mysqli_stat(mysqli $mysql_link) {}

/**
 * @param mysqli $mysql_link
 * @param int $flags
 *
 * @return mysqli_result|bool
 */
function mysqli_store_result(mysqli $mysql_link, int $flags = 0) {}

/**
 * @param mysqli $mysql_link
 *
 * @return int
 */
function mysqli_thread_id(mysqli $mysql_link): int {}

/**
 * @return bool
 */
function mysqli_thread_safe(): bool {}

/**
 * @param mysqli $mysql_link
 *
 * @return mysqli_result|bool
 */
function mysqli_use_result(mysqli $mysql_link) {}

/**
 * @param mysqli $mysql_link
 *
 * @return int
 */
function mysqli_warning_count(mysqli $mysql_link): int {}

/**
 * @param mysqli $mysqli_link
 * @param int $options
 *
 * @return bool
 */
function mysqli_refresh(mysqli $mysqli_link, int $options): bool {}

/**
 * @param mysqli $mysqli_link
 * @param string $escapestr
 *
 * @return string
 */
function mysqli_escape_string(mysqli $mysqli_link, string $escapestr): string {}

/**
 * @param mysqli $mysqli_link
 * @param int $mysql_option
 * @param mixed $mysql_value
 *
 * @return bool
 */
function mysqli_set_opt(mysqli $mysqli_link, int $mysql_option, mixed $mysql_value): bool {}
