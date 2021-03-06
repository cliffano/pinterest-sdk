(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    min_price: Catalogs_product_group_pricing_criteria.t;
    max_price: Catalogs_product_group_pricing_criteria.t;
    currency: Catalogs_product_group_currency_criteria.t;
    item_id: Catalogs_product_group_currency_criteria.t;
    availability: Catalogs_product_group_multiple_string_criteria.t;
    brand: Catalogs_product_group_multiple_string_criteria.t;
    condition: Catalogs_product_group_multiple_string_criteria.t;
    custom_label_0: Catalogs_product_group_multiple_string_criteria.t;
    custom_label_1: Catalogs_product_group_multiple_string_criteria.t;
    custom_label_2: Catalogs_product_group_multiple_string_criteria.t;
    custom_label_3: Catalogs_product_group_multiple_string_criteria.t;
    custom_label_4: Catalogs_product_group_multiple_string_criteria.t;
    item_group_id: Catalogs_product_group_multiple_string_criteria.t;
    gender: Catalogs_product_group_multiple_string_criteria.t;
    product_type_4: Catalogs_product_group_multiple_string_list_criteria.t;
    product_type_3: Catalogs_product_group_multiple_string_list_criteria.t;
    product_type_2: Catalogs_product_group_multiple_string_list_criteria.t;
    product_type_1: Catalogs_product_group_multiple_string_list_criteria.t;
    product_type_0: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_6: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_5: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_4: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_3: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_2: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_1: Catalogs_product_group_multiple_string_list_criteria.t;
    google_product_category_0: Catalogs_product_group_multiple_string_list_criteria.t;
} [@@deriving yojson { strict = false }, show ];;

let create (min_price : Catalogs_product_group_pricing_criteria.t) (max_price : Catalogs_product_group_pricing_criteria.t) (currency : Catalogs_product_group_currency_criteria.t) (item_id : Catalogs_product_group_currency_criteria.t) (availability : Catalogs_product_group_multiple_string_criteria.t) (brand : Catalogs_product_group_multiple_string_criteria.t) (condition : Catalogs_product_group_multiple_string_criteria.t) (custom_label_0 : Catalogs_product_group_multiple_string_criteria.t) (custom_label_1 : Catalogs_product_group_multiple_string_criteria.t) (custom_label_2 : Catalogs_product_group_multiple_string_criteria.t) (custom_label_3 : Catalogs_product_group_multiple_string_criteria.t) (custom_label_4 : Catalogs_product_group_multiple_string_criteria.t) (item_group_id : Catalogs_product_group_multiple_string_criteria.t) (gender : Catalogs_product_group_multiple_string_criteria.t) (product_type_4 : Catalogs_product_group_multiple_string_list_criteria.t) (product_type_3 : Catalogs_product_group_multiple_string_list_criteria.t) (product_type_2 : Catalogs_product_group_multiple_string_list_criteria.t) (product_type_1 : Catalogs_product_group_multiple_string_list_criteria.t) (product_type_0 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_6 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_5 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_4 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_3 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_2 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_1 : Catalogs_product_group_multiple_string_list_criteria.t) (google_product_category_0 : Catalogs_product_group_multiple_string_list_criteria.t) : t = {
    min_price = min_price;
    max_price = max_price;
    currency = currency;
    item_id = item_id;
    availability = availability;
    brand = brand;
    condition = condition;
    custom_label_0 = custom_label_0;
    custom_label_1 = custom_label_1;
    custom_label_2 = custom_label_2;
    custom_label_3 = custom_label_3;
    custom_label_4 = custom_label_4;
    item_group_id = item_group_id;
    gender = gender;
    product_type_4 = product_type_4;
    product_type_3 = product_type_3;
    product_type_2 = product_type_2;
    product_type_1 = product_type_1;
    product_type_0 = product_type_0;
    google_product_category_6 = google_product_category_6;
    google_product_category_5 = google_product_category_5;
    google_product_category_4 = google_product_category_4;
    google_product_category_3 = google_product_category_3;
    google_product_category_2 = google_product_category_2;
    google_product_category_1 = google_product_category_1;
    google_product_category_0 = google_product_category_0;
}

