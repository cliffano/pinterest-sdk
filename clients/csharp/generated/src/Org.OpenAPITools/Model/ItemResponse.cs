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
    /// Object describing an item record
    /// </summary>
    [JsonConverter(typeof(ItemResponseJsonConverter))]
    [DataContract(Name = "ItemResponse")]
    public partial class ItemResponse : AbstractOpenAPISchema, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ItemResponse" /> class
        /// with the <see cref="ItemResponseAnyOf" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of ItemResponseAnyOf.</param>
        public ItemResponse(ItemResponseAnyOf actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "anyOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ItemResponse" /> class
        /// with the <see cref="ItemResponseAnyOf1" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of ItemResponseAnyOf1.</param>
        public ItemResponse(ItemResponseAnyOf1 actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "anyOf";
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
                if (value.GetType() == typeof(ItemResponseAnyOf))
                {
                    this._actualInstance = value;
                }
                else if (value.GetType() == typeof(ItemResponseAnyOf1))
                {
                    this._actualInstance = value;
                }
                else
                {
                    throw new ArgumentException("Invalid instance found. Must be the following types: ItemResponseAnyOf, ItemResponseAnyOf1");
                }
            }
        }

        /// <summary>
        /// Get the actual instance of `ItemResponseAnyOf`. If the actual instance is not `ItemResponseAnyOf`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of ItemResponseAnyOf</returns>
        public ItemResponseAnyOf GetItemResponseAnyOf()
        {
            return (ItemResponseAnyOf)this.ActualInstance;
        }

        /// <summary>
        /// Get the actual instance of `ItemResponseAnyOf1`. If the actual instance is not `ItemResponseAnyOf1`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of ItemResponseAnyOf1</returns>
        public ItemResponseAnyOf1 GetItemResponseAnyOf1()
        {
            return (ItemResponseAnyOf1)this.ActualInstance;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ItemResponse {\n");
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
            return JsonConvert.SerializeObject(this.ActualInstance, ItemResponse.SerializerSettings);
        }

        /// <summary>
        /// Converts the JSON string into an instance of ItemResponse
        /// </summary>
        /// <param name="jsonString">JSON string</param>
        /// <returns>An instance of ItemResponse</returns>
        public static ItemResponse FromJson(string jsonString)
        {
            ItemResponse newItemResponse = null;

            if (string.IsNullOrEmpty(jsonString))
            {
                return newItemResponse;
            }

            try
            {
                newItemResponse = new ItemResponse(JsonConvert.DeserializeObject<ItemResponseAnyOf>(jsonString, ItemResponse.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newItemResponse;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into ItemResponseAnyOf: {1}", jsonString, exception.ToString()));
            }

            try
            {
                newItemResponse = new ItemResponse(JsonConvert.DeserializeObject<ItemResponseAnyOf1>(jsonString, ItemResponse.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newItemResponse;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into ItemResponseAnyOf1: {1}", jsonString, exception.ToString()));
            }

            // no match found, throw an exception
            throw new InvalidDataException("The JSON string `" + jsonString + "` cannot be deserialized into any schema defined.");
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
    /// Custom JSON converter for ItemResponse
    /// </summary>
    public class ItemResponseJsonConverter : JsonConverter
    {
        /// <summary>
        /// To write the JSON string
        /// </summary>
        /// <param name="writer">JSON writer</param>
        /// <param name="value">Object to be converted into a JSON string</param>
        /// <param name="serializer">JSON Serializer</param>
        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue((string)(typeof(ItemResponse).GetMethod("ToJson").Invoke(value, null)));
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
                    return ItemResponse.FromJson(JObject.Load(reader).ToString(Formatting.None));
                case JsonToken.StartArray:
                    return ItemResponse.FromJson(JArray.Load(reader).ToString(Formatting.None));
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