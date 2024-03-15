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
    /// User list operation type (add or remove)
    /// </summary>
    /// <value>User list operation type (add or remove)</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum UserListOperationType
    {
        /// <summary>
        /// Enum ADD for value: ADD
        /// </summary>
        [EnumMember(Value = "ADD")]
        ADD = 1,

        /// <summary>
        /// Enum REMOVE for value: REMOVE
        /// </summary>
        [EnumMember(Value = "REMOVE")]
        REMOVE = 2
    }

}
