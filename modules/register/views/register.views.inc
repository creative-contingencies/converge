<?php
function register_views_data() {
  $data = array();
  $data['converge_ticket_allocation'] = array(
    'tid' => array(
      'title' => t('tid'),
      'help' => t('Ticket allocation ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'order_product_id' => array(
      'title' => t('Order Product ID'),
      'help' => t('Unique product line item on an order.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_order_products',
        'base field' => 'order_product_id',
        'relationship field' => 'order_product_id',
        'label' => t('Product'),
      ),
    ),
    'uid' => array(
      'title' => t('User'),
      'help' => t('User ID'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'users',
        'base field' => 'uid',
        'relationship field' => 'uid',
        'label' => t('User'),
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'tid',
        'title' => t('CCC: Ticket Allocations'),
        'help' => t('Event tickets allocated to users with accounts on the site.'),
        'weight' => -10,
        'database' => 'default',
      ),
      'group' => t('Conference Tickets'),
/*
      'join' => array(
        'uc_order_products' => array(
          'handler' => 'views_join',
          'left_table' => 'uc_order_products',
          'left_field' => 'order_product_id',
          'field' => 'order_product_id',
        ),
        'node' => array(
          'handler' => 'views_join',
          'left_table' => 'node',
          'left_field' => 'nid',
          'field' => 'timeslot',
        ),
      ),
*/
    ),
  );

  $data['uc_order_products'] = array(
    'order_product_id' => array(
      'title' => t('Ordered Product'),
      'help' => t('Primary key: the ordered product ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'converge_ticket_allocation',
        'base field' => 'order_product_id',
        'label' => t('ticket'),
      ),
    ),
    'order_id' => array(
      'title' => t('Order ID'),
      'help' => t('The unique UbertCart order ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_order',
        'base field' => 'order_id',
        'label' => t('order'),
      ),
    ),
    'nid' => array(
      'title' => t('Product'),
      'help' => t('The product node.'),
      'field' => array(
        'handler' => 'views_handler_field_node',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_node',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_node',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'node',
        'base field' => 'nid',
        'label' => t('product'),
      ),
    ),
    'title' => array(
      'title' => t('title'),
      'help' => t('The product title, created from the node title.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
        // Work this into a list of products for the filter.
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'manufacturer' => array(
      'title' => t('manufacturer'),
      'help' => t('The product manufacturer. (Deprecated)'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'model' => array(
      'title' => t('model'),
      'help' => t('The product model/SKU, from {uc_products}.model.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'qty' => array(
      'title' => t('qty'),
      'help' => t('The number of the same product ordered.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'cost' => array(
      'title' => t('cost'),
      'help' => t('The cost to the store for the product.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'price' => array(
      'title' => t('price'),
      'help' => t('The price paid for the ordered product.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'weight' => array(
      'title' => t('weight'),
      'help' => t('The physical weight.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'data' => array(
      'title' => t('data'),
      'help' => t('A serialized array of extra data.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'order_product_id',
        'title' => t('UberCart Order Products'),
        'help' => t('The products that have been ordered.'),
        'weight' => -10,
        'database' => 'default',
      ),
      'group' => t('UberCart: Order Products'),
      'join' => array(
        'node' => array(
          'handler' => 'views_join',
          'left_table' => 'node',
          'left_field' => 'nid',
          'field' => 'nid',
        ),
        'converge_ticket_allocation' => array(
          'handler' => 'views_join',
          'left_table' => 'converge_ticket_allocation',
          'left_field' => 'order_product_id',
          'field' => 'order_product_id',
        ),
      ),
    ),
  );

  $data['uc_orders'] = array(
    'order_id' => array(
      'title' => t('order_id'),
      'help' => t('Primary key: the order ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_order_products',
        'base field' => 'order_id',
        'label' => t('Join uc_orders to uc_order_products'),
      ),
    ),
    'uid' => array(
      'title' => t('uid'),
      'help' => t('The {user}.uid of the customer that placed the order.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'converge_ticket_allocation',
        'base field' => 'uid',
        'label' => t('Join uc_orders to converge_ticket_allocation'),
      ),
    ),
    'order_status' => array(
      'title' => t('order_status'),
      'help' => t('The {uc_order_statuses}.order_status_id indicating the order status.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'order_total' => array(
      'title' => t('order_total'),
      'help' => t('The total amount to be paid for the order.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'product_count' => array(
      'title' => t('product_count'),
      'help' => t('The total product quantity of the order.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'primary_email' => array(
      'title' => t('primary_email'),
      'help' => t('The email address of the customer.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_first_name' => array(
      'title' => t('delivery_first_name'),
      'help' => t('The first name of the person receiving shipment.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_last_name' => array(
      'title' => t('delivery_last_name'),
      'help' => t('The last name of the person receiving shipment.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_phone' => array(
      'title' => t('delivery_phone'),
      'help' => t('The phone number at the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_company' => array(
      'title' => t('delivery_company'),
      'help' => t('The company at the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_street1' => array(
      'title' => t('delivery_street1'),
      'help' => t('The street address of the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_street2' => array(
      'title' => t('delivery_street2'),
      'help' => t('The second line of the street address.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_city' => array(
      'title' => t('delivery_city'),
      'help' => t('The city of the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_zone' => array(
      'title' => t('delivery_zone'),
      'help' => t('The state/zone/province id of the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_postal_code' => array(
      'title' => t('delivery_postal_code'),
      'help' => t('The postal code of the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delivery_country' => array(
      'title' => t('delivery_country'),
      'help' => t('The country ID of the delivery location.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_first_name' => array(
      'title' => t('billing_first_name'),
      'help' => t('The first name of the person paying for the order.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_last_name' => array(
      'title' => t('billing_last_name'),
      'help' => t('The last name of the person paying for the order.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_phone' => array(
      'title' => t('Phone (Billing)'),
      'help' => t('The phone number for the billing address.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_company' => array(
      'title' => t('Company (Billing)'),
      'help' => t('The company of the billing address.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_street1' => array(
      'title' => t('Steet 1 (Billing)'),
      'help' => t('The street address where the bill will be sent.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_street2' => array(
      'title' => t('Street 2 (Billing)'),
      'help' => t('The second line of the street address.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_city' => array(
      'title' => t('City (Billing)'),
      'help' => t('The city where the bill will be sent.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_zone' => array(
      'title' => t('State ID (Billing)'),
      'help' => t('The state/zone/province ID where the bill will be sent.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_zones',
        'base field' => 'zone_id',
        'relationship field' => 'billing_zone',
        'label' => t('state'),
      ),
    ),
    'billing_postal_code' => array(
      'title' => t('Billing Postcode'),
      'help' => t('The postal code where the bill will be sent.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'billing_country' => array(
      'title' => t('Billing Country ID'),
      'help' => t('The country ID where the bill will be sent.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_countries',
        'base field' => 'country_id',
        'relationship field' => 'billing_country',
        'label' => t('countries'),
      ),
    ),
    'payment_method' => array(
      'title' => t('payment_method'),
      'help' => t('The method of payment.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'data' => array(
      'title' => t('data'),
      'help' => t('A serialized array of extra data.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'created' => array(
      'title' => t('created'),
      'help' => t('The Unix timestamp indicating when the order was created.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'modified' => array(
      'title' => t('modified'),
      'help' => t('The Unix timestamp indicating when the order was last modified.'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    ),
    'host' => array(
      'title' => t('host'),
      'help' => t('Host IP address of the person paying for the order.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'order_id',
        'title' => t('UberCart Orders'),
        'help' => t('Stores Ubercart order information.'),
        'weight' => 10,
        'database' => 'default',
      ),
      'group' => t('UberCart: Orders'),
      'join' => array(
        'users' => array(
          'handler' => 'views_join',
          'left_table' => 'users',
          'left_field' => 'uid',
          'field' => 'uid',
        ),
        'uc_order_products' => array(
          'handler' => 'views_join',
          'left_table' => 'uc_order_products',
          'left_field' => 'order_id',
          'field' => 'order_id',
        ),
      ),
    ),
  );

  // Need to also link zone and country data.
  $data['uc_countries'] = array(
    'country_id' => array(
      'title' => t('country_id'),
      'help' => t('Primary key: numeric ISO country code.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'country_name' => array(
      'title' => t('country_name'),
      'help' => t('The country name.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'country_iso_code_2' => array(
      'title' => t('country_iso_code_2'),
      'help' => t('The two-character ISO country code.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'country_iso_code_3' => array(
      'title' => t('country_iso_code_3'),
      'help' => t('The three-character ISO country code.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'version' => array(
      'title' => t('version'),
      'help' => t('The version of the CIF that loaded the country information.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'country_id',
        'title' => t('Countries'),
        'help' => t('Stores country information.'),
        'weight' => 10,
        'database' => 'default',
      ),
      'group' => t('UberCart: Countries'),
    ),
  );

  $data['uc_zones'] = array(
    'zone_id' => array(
      'title' => t('Zone ID'),
      'help' => t('Primary key: the unique zone id.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'zone_country_id' => array(
      'title' => t('Country ID'),
      'help' => t('The {uc_countries}.country_id to which this zone belongs.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'uc_countries',
        'base field' => 'country_id',
        'relationship field' => 'zone_country_id',
        'label' => t('countries'),
      ),
    ),
    'zone_code' => array(
      'title' => t('Code'),
      'help' => t('Standard abbreviation of the zone name.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'zone_name' => array(
      'title' => t('State/Province'),
      'help' => t('The zone name.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'zone_id',
        'title' => t('State'),
        'help' => t('Stores state/province information within a country.'),
        'weight' => 10,
        'database' => 'default',
      ),
      'group' => t('UberCart: States'),
    ),
  );

  // Presenters reverse reference malarkeys!
  $data['content_field_proposal_presenters'] = array(
    'nid' => array(
      'title' => t('nid'),
      'help' => t('Proposal Node ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'delta' => array(
      'title' => t('Delta'),
      'help' => t(' Sort order (delta)'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'uid' => array(
      'title' => t('Presenter'),
      'help' => t('The user ID of the presenter.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'base' => 'users',
        'base field' => 'uid',
        'relationship field' => 'field_proposal_presenters_uid',
        'label' => t('User'),
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'content_field_proposal_presenters',
        'title' => t('Proposal Presenters'),
        'help' => t('The presenters linked with a proposal.'),
        'weight' => -10,
        'database' => 'default',
      ),
      'group' => t('Conference Presenters'),
      'join' => array(
        'node' => array(
          'handler' => 'views_join',
          'left_table' => 'node',
          'left_field' => 'nid',
          'field' => 'nid',
        ),
        'users' => array(
          'handler' => 'views_join',
          'left_table' => 'users',
          'left_field' => 'uid',
          'field' => 'field_proposal_presenters_uid',
        ),
      ),
    ),
  );

  return $data;
}

/**
 * Implementation of hook_views_data_alter().
 */
function register_views_data_alter(&$data) {
  // User relationship for ticket allocations
  $data['users']['converge_ticket_allocation'] = array(
    'group' => t('Conference Tickets'),
    'title' => t('Ticket Allocation'),
    'help' => t('Create a relationship to the ticket allocations of the user.'),
    'relationship' => array(
      'base' => 'converge_ticket_allocation',
      'base field' => 'uid',
      'relationship field' => 'uid',
      'label' => t('tickets'),
    ),
  );

  // node relationship for allocations
  $data['uc_order_products']['term_node'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Product Taxonomy'),
    'help' => t('Create a relationship to the product taxonomy terms.'),
    'relationship' => array(
      'base' => 'term_node',
      'base field' => 'nid',
      'relationship field' => 'nid',
      'label' => t('product taxonomy'),
    ),
  );

  $data['uc_orders']['uc_order_products'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Order'),
    'help' => t('Create a relationship to the order data.'),
    'relationship' => array(
      'base' => 'uc_order_products',
      'base field' => 'order_id',
      'relationship field' => 'order_id',
      'label' => t('order'),
    ),
  );

  $data['uc_order_products']['node'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Product'),
    'help' => t('Create a relationship to the node data.'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'nid',
      'label' => t('Product'),
    ),
  );

  $data['content_field_proposal_presenters']['node'] = array(
    'group' => t('Conference Presenters'),
    'title' => t('Proposal'),
    'help' => t('Create a relationship to the proposal node.'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'relationship field' => 'nid',
      'label' => t('Proposal'),
    ),
  );
}
