        $uid = $allocated['uid'] ? $allocated['uid'] : db_result(db_query("SELECT uid FROM users WHERE LCASE(mail) = '%s'", strtolower(trim($allocated['mail']))));
