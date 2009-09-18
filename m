        $result = db_query("SELECT u.mail FROM {users_roles} AS ur LEFT JOIN {users} AS u ON (u.uid=ur.uid) WHERE ur.rid=%d", variable_get('proposal_chair_rid', 0));
        while($o = db_fetch_object($result)) {
          drupal_mail('proposal', 'notify_admin', $o->mail, $language, $params);
        }
