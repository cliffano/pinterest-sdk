/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// Whether the data is owned by the partner (1p) or by the data provider (3p)
    /// </summary>
    /// <value>Whether the data is owned by the partner (1p) or by the data provider (3p)</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum AudienceDataParty
    {
        /// <summary>
        /// Enum _1p for value: 1p
        /// </summary>
        [EnumMember(Value = "1p")]
        _1p = 1,

        /// <summary>
        /// Enum _3p for value: 3p
        /// </summary>
        [EnumMember(Value = "3p")]
        _3p = 2
    }

}