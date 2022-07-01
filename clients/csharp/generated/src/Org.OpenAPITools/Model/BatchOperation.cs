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
    /// The operation performed by the batch
    /// </summary>
    /// <value>The operation performed by the batch</value>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum BatchOperation
    {
        /// <summary>
        /// Enum UPDATE for value: UPDATE
        /// </summary>
        [EnumMember(Value = "UPDATE")]
        UPDATE = 1,

        /// <summary>
        /// Enum CREATE for value: CREATE
        /// </summary>
        [EnumMember(Value = "CREATE")]
        CREATE = 2,

        /// <summary>
        /// Enum UPSERT for value: UPSERT
        /// </summary>
        [EnumMember(Value = "UPSERT")]
        UPSERT = 3

    }

}
