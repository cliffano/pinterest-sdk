/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Catalog product group type
    /// </summary>
    /// <value>Catalog product group type</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum CatalogsProductGroupType
    {
        /// <summary>
        /// Enum MERCHANTCREATED for value: MERCHANT_CREATED
        /// </summary>
        [EnumMember(Value = "MERCHANT_CREATED")]
        MERCHANTCREATED = 1,

        /// <summary>
        /// Enum ALLPRODUCTS for value: ALL_PRODUCTS
        /// </summary>
        [EnumMember(Value = "ALL_PRODUCTS")]
        ALLPRODUCTS = 2,

        /// <summary>
        /// Enum BESTDEALS for value: BEST_DEALS
        /// </summary>
        [EnumMember(Value = "BEST_DEALS")]
        BESTDEALS = 3,

        /// <summary>
        /// Enum PINNERFAVORITES for value: PINNER_FAVORITES
        /// </summary>
        [EnumMember(Value = "PINNER_FAVORITES")]
        PINNERFAVORITES = 4,

        /// <summary>
        /// Enum TOPSELLERS for value: TOP_SELLERS
        /// </summary>
        [EnumMember(Value = "TOP_SELLERS")]
        TOPSELLERS = 5,

        /// <summary>
        /// Enum BACKINSTOCK for value: BACK_IN_STOCK
        /// </summary>
        [EnumMember(Value = "BACK_IN_STOCK")]
        BACKINSTOCK = 6,

        /// <summary>
        /// Enum NEWARRIVALS for value: NEW_ARRIVALS
        /// </summary>
        [EnumMember(Value = "NEW_ARRIVALS")]
        NEWARRIVALS = 7

    }

}
