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
using JsonSubTypes;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;
using System.Reflection;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Request object for updating a hotel product group.
    /// </summary>
    [JsonConverter(typeof(CatalogsVerticalProductGroupUpdateRequestJsonConverter))]
    [DataContract(Name = "CatalogsVerticalProductGroupUpdateRequest")]
    public partial class CatalogsVerticalProductGroupUpdateRequest : AbstractOpenAPISchema, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsVerticalProductGroupUpdateRequest" /> class
        /// with the <see cref="CatalogsHotelProductGroupUpdateRequest" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of CatalogsHotelProductGroupUpdateRequest.</param>
        public CatalogsVerticalProductGroupUpdateRequest(CatalogsHotelProductGroupUpdateRequest actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "oneOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }


        private Object _actualInstance;

        /// <summary>
        /// Gets or Sets ActualInstance
        /// </summary>
        public override Object ActualInstance
        {
            get
            {
                return _actualInstance;
            }
            set
            {
                if (value.GetType() == typeof(CatalogsHotelProductGroupUpdateRequest))
                {
                    this._actualInstance = value;
                }
                else
                {
                    throw new ArgumentException("Invalid instance found. Must be the following types: CatalogsHotelProductGroupUpdateRequest");
                }
            }
        }

        /// <summary>
        /// Get the actual instance of `CatalogsHotelProductGroupUpdateRequest`. If the actual instance is not `CatalogsHotelProductGroupUpdateRequest`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of CatalogsHotelProductGroupUpdateRequest</returns>
        public CatalogsHotelProductGroupUpdateRequest GetCatalogsHotelProductGroupUpdateRequest()
        {
            return (CatalogsHotelProductGroupUpdateRequest)this.ActualInstance;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsVerticalProductGroupUpdateRequest {\n");
            sb.Append("  ActualInstance: ").Append(this.ActualInstance).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public override string ToJson()
        {
            return JsonConvert.SerializeObject(this.ActualInstance, CatalogsVerticalProductGroupUpdateRequest.SerializerSettings);
        }

        /// <summary>
        /// Converts the JSON string into an instance of CatalogsVerticalProductGroupUpdateRequest
        /// </summary>
        /// <param name="jsonString">JSON string</param>
        /// <returns>An instance of CatalogsVerticalProductGroupUpdateRequest</returns>
        public static CatalogsVerticalProductGroupUpdateRequest FromJson(string jsonString)
        {
            CatalogsVerticalProductGroupUpdateRequest newCatalogsVerticalProductGroupUpdateRequest = null;

            if (string.IsNullOrEmpty(jsonString))
            {
                return newCatalogsVerticalProductGroupUpdateRequest;
            }
            int match = 0;
            List<string> matchedTypes = new List<string>();

            try
            {
                // if it does not contains "AdditionalProperties", use SerializerSettings to deserialize
                if (typeof(CatalogsHotelProductGroupUpdateRequest).GetProperty("AdditionalProperties") == null)
                {
                    newCatalogsVerticalProductGroupUpdateRequest = new CatalogsVerticalProductGroupUpdateRequest(JsonConvert.DeserializeObject<CatalogsHotelProductGroupUpdateRequest>(jsonString, CatalogsVerticalProductGroupUpdateRequest.SerializerSettings));
                }
                else
                {
                    newCatalogsVerticalProductGroupUpdateRequest = new CatalogsVerticalProductGroupUpdateRequest(JsonConvert.DeserializeObject<CatalogsHotelProductGroupUpdateRequest>(jsonString, CatalogsVerticalProductGroupUpdateRequest.AdditionalPropertiesSerializerSettings));
                }
                matchedTypes.Add("CatalogsHotelProductGroupUpdateRequest");
                match++;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into CatalogsHotelProductGroupUpdateRequest: {1}", jsonString, exception.ToString()));
            }

            if (match == 0)
            {
                throw new InvalidDataException("The JSON string `" + jsonString + "` cannot be deserialized into any schema defined.");
            }
            else if (match > 1)
            {
                throw new InvalidDataException("The JSON string `" + jsonString + "` incorrectly matches more than one schema (should be exactly one match): " + String.Join(",", matchedTypes));
            }

            // deserialization is considered successful at this point if no exception has been thrown.
            return newCatalogsVerticalProductGroupUpdateRequest;
        }


        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

    /// <summary>
    /// Custom JSON converter for CatalogsVerticalProductGroupUpdateRequest
    /// </summary>
    public class CatalogsVerticalProductGroupUpdateRequestJsonConverter : JsonConverter
    {
        /// <summary>
        /// To write the JSON string
        /// </summary>
        /// <param name="writer">JSON writer</param>
        /// <param name="value">Object to be converted into a JSON string</param>
        /// <param name="serializer">JSON Serializer</param>
        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue((string)(typeof(CatalogsVerticalProductGroupUpdateRequest).GetMethod("ToJson").Invoke(value, null)));
        }

        /// <summary>
        /// To convert a JSON string into an object
        /// </summary>
        /// <param name="reader">JSON reader</param>
        /// <param name="objectType">Object type</param>
        /// <param name="existingValue">Existing value</param>
        /// <param name="serializer">JSON Serializer</param>
        /// <returns>The object converted from the JSON string</returns>
        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
        {
            switch(reader.TokenType) 
            {
                case JsonToken.StartObject:
                    return CatalogsVerticalProductGroupUpdateRequest.FromJson(JObject.Load(reader).ToString(Formatting.None));
                case JsonToken.StartArray:
                    return CatalogsVerticalProductGroupUpdateRequest.FromJson(JArray.Load(reader).ToString(Formatting.None));
                default:
                    return null;
            }
        }

        /// <summary>
        /// Check if the object can be converted
        /// </summary>
        /// <param name="objectType">Object type</param>
        /// <returns>True if the object can be converted</returns>
        public override bool CanConvert(Type objectType)
        {
            return false;
        }
    }

}