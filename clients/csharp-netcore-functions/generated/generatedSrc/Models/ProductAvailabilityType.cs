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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Default availability for products in a feed.
    /// </summary>
    /// <value>Default availability for products in a feed.</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum ProductAvailabilityType
    {
        /// <summary>
        /// Enum INSTOCK for value: IN_STOCK
        /// </summary>
        [EnumMember(Value = "IN_STOCK")]
        INSTOCK = 1,

        /// <summary>
        /// Enum OUTOFSTOCK for value: OUT_OF_STOCK
        /// </summary>
        [EnumMember(Value = "OUT_OF_STOCK")]
        OUTOFSTOCK = 2,

        /// <summary>
        /// Enum PREORDER for value: PREORDER
        /// </summary>
        [EnumMember(Value = "PREORDER")]
        PREORDER = 3,

        /// <summary>
        /// Enum Null for value: null
        /// </summary>
        [EnumMember(Value = "null")]
        Null = 4

    }

}
