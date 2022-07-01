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
    /// The file format of a feed.
    /// </summary>
    /// <value>The file format of a feed.</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum CatalogsFormat
    {
        /// <summary>
        /// Enum TSV for value: TSV
        /// </summary>
        [EnumMember(Value = "TSV")]
        TSV = 1,

        /// <summary>
        /// Enum CSV for value: CSV
        /// </summary>
        [EnumMember(Value = "CSV")]
        CSV = 2,

        /// <summary>
        /// Enum XML for value: XML
        /// </summary>
        [EnumMember(Value = "XML")]
        XML = 3

    }

}
