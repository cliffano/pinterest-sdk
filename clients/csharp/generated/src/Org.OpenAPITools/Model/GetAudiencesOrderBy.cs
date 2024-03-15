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
    /// Defines GetAudiencesOrderBy
    /// </summary>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum GetAudiencesOrderBy
    {
        /// <summary>
        /// Enum NONE for value: NONE
        /// </summary>
        [EnumMember(Value = "NONE")]
        NONE = 1,

        /// <summary>
        /// Enum ID for value: ID
        /// </summary>
        [EnumMember(Value = "ID")]
        ID = 2,

        /// <summary>
        /// Enum SIZE for value: SIZE
        /// </summary>
        [EnumMember(Value = "SIZE")]
        SIZE = 3,

        /// <summary>
        /// Enum CREATIONDATE for value: CREATION_DATE
        /// </summary>
        [EnumMember(Value = "CREATION_DATE")]
        CREATIONDATE = 4,

        /// <summary>
        /// Enum UPDATEDTIME for value: UPDATED_TIME
        /// </summary>
        [EnumMember(Value = "UPDATED_TIME")]
        UPDATEDTIME = 5,

        /// <summary>
        /// Enum NAME for value: NAME
        /// </summary>
        [EnumMember(Value = "NAME")]
        NAME = 6,

        /// <summary>
        /// Enum STATUS for value: STATUS
        /// </summary>
        [EnumMember(Value = "STATUS")]
        STATUS = 7,

        /// <summary>
        /// Enum TYPE for value: TYPE
        /// </summary>
        [EnumMember(Value = "TYPE")]
        TYPE = 8
    }

}