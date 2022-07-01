"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import re  # noqa: F401
import sys  # noqa: F401

from pinterestsdk.model_utils import (  # noqa: F401
    ApiTypeError,
    ModelComposed,
    ModelNormal,
    ModelSimple,
    cached_property,
    change_keys_js_to_python,
    convert_js_args_to_python_args,
    date,
    datetime,
    file_type,
    none_type,
    validate_get_composed_info,
    OpenApiModel
)
from pinterestsdk.exceptions import ApiAttributeError



class CatalogsFeedValidationWarnings(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {
    }

    validations = {
    }

    @cached_property
    def additional_properties_type():
        """
        This must be a method because a model may have properties that are
        of type self, this must run after the class is loaded
        """
        return (bool, date, datetime, dict, float, int, list, str, none_type,)  # noqa: E501

    _nullable = False

    @cached_property
    def openapi_types():
        """
        This must be a method because a model may have properties that are
        of type self, this must run after the class is loaded

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            'title_length_too_long': (int,),  # noqa: E501
            'description_length_too_long': (int,),  # noqa: E501
            'gender_invalid': (int,),  # noqa: E501
            'age_group_invalid': (int,),  # noqa: E501
            'size_type_invalid': (int,),  # noqa: E501
            'link_format_warning': (int,),  # noqa: E501
            'duplicate_products': (int,),  # noqa: E501
            'duplicate_links': (int,),  # noqa: E501
            'sales_price_invalid': (int,),  # noqa: E501
            'product_category_depth_warning': (int,),  # noqa: E501
            'adwords_same_as_link': (int,),  # noqa: E501
            'duplicate_headers': (int,),  # noqa: E501
            'fetch_same_signature': (int,),  # noqa: E501
            'adwords_format_warning': (int,),  # noqa: E501
            'additional_image_link_warning': (int,),  # noqa: E501
            'image_link_warning': (int,),  # noqa: E501
            'shipping_invalid': (int,),  # noqa: E501
            'tax_invalid': (int,),  # noqa: E501
            'shipping_weight_invalid': (int,),  # noqa: E501
            'expiration_date_invalid': (int,),  # noqa: E501
            'availability_date_invalid': (int,),  # noqa: E501
            'sale_date_invalid': (int,),  # noqa: E501
            'weight_unit_invalid': (int,),  # noqa: E501
            'is_bundle_invalid': (int,),  # noqa: E501
            'updated_time_invalid': (int,),  # noqa: E501
            'custom_label_length_too_long': (int,),  # noqa: E501
            'product_type_length_too_long': (int,),  # noqa: E501
            'too_many_additional_image_links': (int,),  # noqa: E501
            'multipack_invalid': (int,),  # noqa: E501
            'indexed_product_count_large_delta': (int,),  # noqa: E501
            'item_additional_image_download_failure': (int,),  # noqa: E501
            'optional_product_category_missing': (int,),  # noqa: E501
            'optional_product_category_invalid': (int,),  # noqa: E501
            'optional_condition_missing': (int,),  # noqa: E501
            'optional_condition_invalid': (int,),  # noqa: E501
            'ios_deep_link_invalid': (int,),  # noqa: E501
            'android_deep_link_invalid': (int,),  # noqa: E501
            'availability_normalized': (int,),  # noqa: E501
            'condition_normalized': (int,),  # noqa: E501
            'gender_normalized': (int,),  # noqa: E501
            'size_type_normalized': (int,),  # noqa: E501
            'age_group_normalized': (int,),  # noqa: E501
            'utm_source_auto_corrected': (int,),  # noqa: E501
            'country_does_not_map_to_currency': (int,),  # noqa: E501
            'min_ad_price_invalid': (int,),  # noqa: E501
        }

    @cached_property
    def discriminator():
        return None


    attribute_map = {
        'title_length_too_long': 'title_length_too_long',  # noqa: E501
        'description_length_too_long': 'description_length_too_long',  # noqa: E501
        'gender_invalid': 'gender_invalid',  # noqa: E501
        'age_group_invalid': 'age_group_invalid',  # noqa: E501
        'size_type_invalid': 'size_type_invalid',  # noqa: E501
        'link_format_warning': 'link_format_warning',  # noqa: E501
        'duplicate_products': 'duplicate_products',  # noqa: E501
        'duplicate_links': 'duplicate_links',  # noqa: E501
        'sales_price_invalid': 'sales_price_invalid',  # noqa: E501
        'product_category_depth_warning': 'product_category_depth_warning',  # noqa: E501
        'adwords_same_as_link': 'adwords_same_as_link',  # noqa: E501
        'duplicate_headers': 'duplicate_headers',  # noqa: E501
        'fetch_same_signature': 'fetch_same_signature',  # noqa: E501
        'adwords_format_warning': 'adwords_format_warning',  # noqa: E501
        'additional_image_link_warning': 'additional_image_link_warning',  # noqa: E501
        'image_link_warning': 'image_link_warning',  # noqa: E501
        'shipping_invalid': 'shipping_invalid',  # noqa: E501
        'tax_invalid': 'tax_invalid',  # noqa: E501
        'shipping_weight_invalid': 'shipping_weight_invalid',  # noqa: E501
        'expiration_date_invalid': 'expiration_date_invalid',  # noqa: E501
        'availability_date_invalid': 'availability_date_invalid',  # noqa: E501
        'sale_date_invalid': 'sale_date_invalid',  # noqa: E501
        'weight_unit_invalid': 'weight_unit_invalid',  # noqa: E501
        'is_bundle_invalid': 'is_bundle_invalid',  # noqa: E501
        'updated_time_invalid': 'updated_time_invalid',  # noqa: E501
        'custom_label_length_too_long': 'custom_label_length_too_long',  # noqa: E501
        'product_type_length_too_long': 'product_type_length_too_long',  # noqa: E501
        'too_many_additional_image_links': 'too_many_additional_image_links',  # noqa: E501
        'multipack_invalid': 'multipack_invalid',  # noqa: E501
        'indexed_product_count_large_delta': 'indexed_product_count_large_delta',  # noqa: E501
        'item_additional_image_download_failure': 'item_additional_image_download_failure',  # noqa: E501
        'optional_product_category_missing': 'optional_product_category_missing',  # noqa: E501
        'optional_product_category_invalid': 'optional_product_category_invalid',  # noqa: E501
        'optional_condition_missing': 'optional_condition_missing',  # noqa: E501
        'optional_condition_invalid': 'optional_condition_invalid',  # noqa: E501
        'ios_deep_link_invalid': 'ios_deep_link_invalid',  # noqa: E501
        'android_deep_link_invalid': 'android_deep_link_invalid',  # noqa: E501
        'availability_normalized': 'availability_normalized',  # noqa: E501
        'condition_normalized': 'condition_normalized',  # noqa: E501
        'gender_normalized': 'gender_normalized',  # noqa: E501
        'size_type_normalized': 'size_type_normalized',  # noqa: E501
        'age_group_normalized': 'age_group_normalized',  # noqa: E501
        'utm_source_auto_corrected': 'utm_source_auto_corrected',  # noqa: E501
        'country_does_not_map_to_currency': 'country_does_not_map_to_currency',  # noqa: E501
        'min_ad_price_invalid': 'min_ad_price_invalid',  # noqa: E501
    }

    read_only_vars = {
    }

    _composed_schemas = {}

    @classmethod
    @convert_js_args_to_python_args
    def _from_openapi_data(cls, *args, **kwargs):  # noqa: E501
        """CatalogsFeedValidationWarnings - a model defined in OpenAPI

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _spec_property_naming (bool): True if the variable names in the input data
                                are serialized names, as specified in the OpenAPI document.
                                False if the variable names in the input data
                                are pythonic names, e.g. snake case (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            _visited_composed_classes (tuple): This stores a tuple of
                                classes that we have traveled through so that
                                if we see that class again we will not use its
                                discriminator again.
                                When traveling through a discriminator, the
                                composed schema that is
                                is traveled through is added to this set.
                                For example if Animal has a discriminator
                                petType and we pass in "Dog", and the class Dog
                                allOf includes Animal, we move through Animal
                                once using the discriminator, and pick Dog.
                                Then in Dog, we will make an instance of the
                                Animal class but this time we won't travel
                                through its discriminator because we passed in
                                _visited_composed_classes = (Animal,)
            title_length_too_long (int): [optional]  # noqa: E501
            description_length_too_long (int): [optional]  # noqa: E501
            gender_invalid (int): [optional]  # noqa: E501
            age_group_invalid (int): [optional]  # noqa: E501
            size_type_invalid (int): [optional]  # noqa: E501
            link_format_warning (int): [optional]  # noqa: E501
            duplicate_products (int): [optional]  # noqa: E501
            duplicate_links (int): [optional]  # noqa: E501
            sales_price_invalid (int): [optional]  # noqa: E501
            product_category_depth_warning (int): [optional]  # noqa: E501
            adwords_same_as_link (int): [optional]  # noqa: E501
            duplicate_headers (int): [optional]  # noqa: E501
            fetch_same_signature (int): [optional]  # noqa: E501
            adwords_format_warning (int): [optional]  # noqa: E501
            additional_image_link_warning (int): [optional]  # noqa: E501
            image_link_warning (int): [optional]  # noqa: E501
            shipping_invalid (int): [optional]  # noqa: E501
            tax_invalid (int): [optional]  # noqa: E501
            shipping_weight_invalid (int): [optional]  # noqa: E501
            expiration_date_invalid (int): [optional]  # noqa: E501
            availability_date_invalid (int): [optional]  # noqa: E501
            sale_date_invalid (int): [optional]  # noqa: E501
            weight_unit_invalid (int): [optional]  # noqa: E501
            is_bundle_invalid (int): [optional]  # noqa: E501
            updated_time_invalid (int): [optional]  # noqa: E501
            custom_label_length_too_long (int): [optional]  # noqa: E501
            product_type_length_too_long (int): [optional]  # noqa: E501
            too_many_additional_image_links (int): [optional]  # noqa: E501
            multipack_invalid (int): [optional]  # noqa: E501
            indexed_product_count_large_delta (int): [optional]  # noqa: E501
            item_additional_image_download_failure (int): [optional]  # noqa: E501
            optional_product_category_missing (int): [optional]  # noqa: E501
            optional_product_category_invalid (int): [optional]  # noqa: E501
            optional_condition_missing (int): [optional]  # noqa: E501
            optional_condition_invalid (int): [optional]  # noqa: E501
            ios_deep_link_invalid (int): [optional]  # noqa: E501
            android_deep_link_invalid (int): [optional]  # noqa: E501
            availability_normalized (int): [optional]  # noqa: E501
            condition_normalized (int): [optional]  # noqa: E501
            gender_normalized (int): [optional]  # noqa: E501
            size_type_normalized (int): [optional]  # noqa: E501
            age_group_normalized (int): [optional]  # noqa: E501
            utm_source_auto_corrected (int): [optional]  # noqa: E501
            country_does_not_map_to_currency (int): [optional]  # noqa: E501
            min_ad_price_invalid (int): [optional]  # noqa: E501
        """

        _check_type = kwargs.pop('_check_type', True)
        _spec_property_naming = kwargs.pop('_spec_property_naming', False)
        _path_to_item = kwargs.pop('_path_to_item', ())
        _configuration = kwargs.pop('_configuration', None)
        _visited_composed_classes = kwargs.pop('_visited_composed_classes', ())

        self = super(OpenApiModel, cls).__new__(cls)

        if args:
            raise ApiTypeError(
                "Invalid positional arguments=%s passed to %s. Remove those invalid positional arguments." % (
                    args,
                    self.__class__.__name__,
                ),
                path_to_item=_path_to_item,
                valid_classes=(self.__class__,),
            )

        self._data_store = {}
        self._check_type = _check_type
        self._spec_property_naming = _spec_property_naming
        self._path_to_item = _path_to_item
        self._configuration = _configuration
        self._visited_composed_classes = _visited_composed_classes + (self.__class__,)

        for var_name, var_value in kwargs.items():
            if var_name not in self.attribute_map and \
                        self._configuration is not None and \
                        self._configuration.discard_unknown_keys and \
                        self.additional_properties_type is None:
                # discard variable.
                continue
            setattr(self, var_name, var_value)
        return self

    required_properties = set([
        '_data_store',
        '_check_type',
        '_spec_property_naming',
        '_path_to_item',
        '_configuration',
        '_visited_composed_classes',
    ])

    @convert_js_args_to_python_args
    def __init__(self, *args, **kwargs):  # noqa: E501
        """CatalogsFeedValidationWarnings - a model defined in OpenAPI

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _spec_property_naming (bool): True if the variable names in the input data
                                are serialized names, as specified in the OpenAPI document.
                                False if the variable names in the input data
                                are pythonic names, e.g. snake case (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            _visited_composed_classes (tuple): This stores a tuple of
                                classes that we have traveled through so that
                                if we see that class again we will not use its
                                discriminator again.
                                When traveling through a discriminator, the
                                composed schema that is
                                is traveled through is added to this set.
                                For example if Animal has a discriminator
                                petType and we pass in "Dog", and the class Dog
                                allOf includes Animal, we move through Animal
                                once using the discriminator, and pick Dog.
                                Then in Dog, we will make an instance of the
                                Animal class but this time we won't travel
                                through its discriminator because we passed in
                                _visited_composed_classes = (Animal,)
            title_length_too_long (int): [optional]  # noqa: E501
            description_length_too_long (int): [optional]  # noqa: E501
            gender_invalid (int): [optional]  # noqa: E501
            age_group_invalid (int): [optional]  # noqa: E501
            size_type_invalid (int): [optional]  # noqa: E501
            link_format_warning (int): [optional]  # noqa: E501
            duplicate_products (int): [optional]  # noqa: E501
            duplicate_links (int): [optional]  # noqa: E501
            sales_price_invalid (int): [optional]  # noqa: E501
            product_category_depth_warning (int): [optional]  # noqa: E501
            adwords_same_as_link (int): [optional]  # noqa: E501
            duplicate_headers (int): [optional]  # noqa: E501
            fetch_same_signature (int): [optional]  # noqa: E501
            adwords_format_warning (int): [optional]  # noqa: E501
            additional_image_link_warning (int): [optional]  # noqa: E501
            image_link_warning (int): [optional]  # noqa: E501
            shipping_invalid (int): [optional]  # noqa: E501
            tax_invalid (int): [optional]  # noqa: E501
            shipping_weight_invalid (int): [optional]  # noqa: E501
            expiration_date_invalid (int): [optional]  # noqa: E501
            availability_date_invalid (int): [optional]  # noqa: E501
            sale_date_invalid (int): [optional]  # noqa: E501
            weight_unit_invalid (int): [optional]  # noqa: E501
            is_bundle_invalid (int): [optional]  # noqa: E501
            updated_time_invalid (int): [optional]  # noqa: E501
            custom_label_length_too_long (int): [optional]  # noqa: E501
            product_type_length_too_long (int): [optional]  # noqa: E501
            too_many_additional_image_links (int): [optional]  # noqa: E501
            multipack_invalid (int): [optional]  # noqa: E501
            indexed_product_count_large_delta (int): [optional]  # noqa: E501
            item_additional_image_download_failure (int): [optional]  # noqa: E501
            optional_product_category_missing (int): [optional]  # noqa: E501
            optional_product_category_invalid (int): [optional]  # noqa: E501
            optional_condition_missing (int): [optional]  # noqa: E501
            optional_condition_invalid (int): [optional]  # noqa: E501
            ios_deep_link_invalid (int): [optional]  # noqa: E501
            android_deep_link_invalid (int): [optional]  # noqa: E501
            availability_normalized (int): [optional]  # noqa: E501
            condition_normalized (int): [optional]  # noqa: E501
            gender_normalized (int): [optional]  # noqa: E501
            size_type_normalized (int): [optional]  # noqa: E501
            age_group_normalized (int): [optional]  # noqa: E501
            utm_source_auto_corrected (int): [optional]  # noqa: E501
            country_does_not_map_to_currency (int): [optional]  # noqa: E501
            min_ad_price_invalid (int): [optional]  # noqa: E501
        """

        _check_type = kwargs.pop('_check_type', True)
        _spec_property_naming = kwargs.pop('_spec_property_naming', False)
        _path_to_item = kwargs.pop('_path_to_item', ())
        _configuration = kwargs.pop('_configuration', None)
        _visited_composed_classes = kwargs.pop('_visited_composed_classes', ())

        if args:
            raise ApiTypeError(
                "Invalid positional arguments=%s passed to %s. Remove those invalid positional arguments." % (
                    args,
                    self.__class__.__name__,
                ),
                path_to_item=_path_to_item,
                valid_classes=(self.__class__,),
            )

        self._data_store = {}
        self._check_type = _check_type
        self._spec_property_naming = _spec_property_naming
        self._path_to_item = _path_to_item
        self._configuration = _configuration
        self._visited_composed_classes = _visited_composed_classes + (self.__class__,)

        for var_name, var_value in kwargs.items():
            if var_name not in self.attribute_map and \
                        self._configuration is not None and \
                        self._configuration.discard_unknown_keys and \
                        self.additional_properties_type is None:
                # discard variable.
                continue
            setattr(self, var_name, var_value)
            if var_name in self.read_only_vars:
                raise ApiAttributeError(f"`{var_name}` is a read-only attribute. Use `from_openapi_data` to instantiate "
                                     f"class with read only attributes.")
