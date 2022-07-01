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
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Format of generated report
    /// </summary>
    /// <value>Format of generated report</value>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum DataOutputFormat
    {
        /// <summary>
        /// Enum JSON for value: JSON
        /// </summary>
        [EnumMember(Value = "JSON")]
        JSON = 1,

        /// <summary>
        /// Enum CSV for value: CSV
        /// </summary>
        [EnumMember(Value = "CSV")]
        CSV = 2

    }

}
