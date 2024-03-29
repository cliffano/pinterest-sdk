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
using System.Reflection;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// CatalogsProductGroupsList200ResponseAllOfItemsInner
    /// </summary>
    [JsonConverter(typeof(CatalogsProductGroupsList200ResponseAllOfItemsInnerJsonConverter))]
    [DataContract(Name = "catalogs_product_groups_list_200_response_allOf_items_inner")]
    public partial class CatalogsProductGroupsList200ResponseAllOfItemsInner : AbstractOpenAPISchema, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupsList200ResponseAllOfItemsInner" /> class
        /// with the <see cref="CatalogsProductGroup" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of CatalogsProductGroup.</param>
        public CatalogsProductGroupsList200ResponseAllOfItemsInner(CatalogsProductGroup actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "anyOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupsList200ResponseAllOfItemsInner" /> class
        /// with the <see cref="CatalogsVerticalProductGroup" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of CatalogsVerticalProductGroup.</param>
        public CatalogsProductGroupsList200ResponseAllOfItemsInner(CatalogsVerticalProductGroup actualInstance)
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
                if (value.GetType() == typeof(CatalogsProductGroup))
                {
                    this._actualInstance = value;
                }
                else if (value.GetType() == typeof(CatalogsVerticalProductGroup))
                {
                    this._actualInstance = value;
                }
                else
                {
                    throw new ArgumentException("Invalid instance found. Must be the following types: CatalogsProductGroup, CatalogsVerticalProductGroup");
                }
            }
        }

        /// <summary>
        /// Get the actual instance of `CatalogsProductGroup`. If the actual instance is not `CatalogsProductGroup`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of CatalogsProductGroup</returns>
        public CatalogsProductGroup GetCatalogsProductGroup()
        {
            return (CatalogsProductGroup)this.ActualInstance;
        }

        /// <summary>
        /// Get the actual instance of `CatalogsVerticalProductGroup`. If the actual instance is not `CatalogsVerticalProductGroup`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of CatalogsVerticalProductGroup</returns>
        public CatalogsVerticalProductGroup GetCatalogsVerticalProductGroup()
        {
            return (CatalogsVerticalProductGroup)this.ActualInstance;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupsList200ResponseAllOfItemsInner {\n");
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
            return JsonConvert.SerializeObject(this.ActualInstance, CatalogsProductGroupsList200ResponseAllOfItemsInner.SerializerSettings);
        }

        /// <summary>
        /// Converts the JSON string into an instance of CatalogsProductGroupsList200ResponseAllOfItemsInner
        /// </summary>
        /// <param name="jsonString">JSON string</param>
        /// <returns>An instance of CatalogsProductGroupsList200ResponseAllOfItemsInner</returns>
        public static CatalogsProductGroupsList200ResponseAllOfItemsInner FromJson(string jsonString)
        {
            CatalogsProductGroupsList200ResponseAllOfItemsInner newCatalogsProductGroupsList200ResponseAllOfItemsInner = null;

            if (string.IsNullOrEmpty(jsonString))
            {
                return newCatalogsProductGroupsList200ResponseAllOfItemsInner;
            }

            try
            {
                newCatalogsProductGroupsList200ResponseAllOfItemsInner = new CatalogsProductGroupsList200ResponseAllOfItemsInner(JsonConvert.DeserializeObject<CatalogsProductGroup>(jsonString, CatalogsProductGroupsList200ResponseAllOfItemsInner.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newCatalogsProductGroupsList200ResponseAllOfItemsInner;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into CatalogsProductGroup: {1}", jsonString, exception.ToString()));
            }

            try
            {
                newCatalogsProductGroupsList200ResponseAllOfItemsInner = new CatalogsProductGroupsList200ResponseAllOfItemsInner(JsonConvert.DeserializeObject<CatalogsVerticalProductGroup>(jsonString, CatalogsProductGroupsList200ResponseAllOfItemsInner.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newCatalogsProductGroupsList200ResponseAllOfItemsInner;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into CatalogsVerticalProductGroup: {1}", jsonString, exception.ToString()));
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
    /// Custom JSON converter for CatalogsProductGroupsList200ResponseAllOfItemsInner
    /// </summary>
    public class CatalogsProductGroupsList200ResponseAllOfItemsInnerJsonConverter : JsonConverter
    {
        /// <summary>
        /// To write the JSON string
        /// </summary>
        /// <param name="writer">JSON writer</param>
        /// <param name="value">Object to be converted into a JSON string</param>
        /// <param name="serializer">JSON Serializer</param>
        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue((string)(typeof(CatalogsProductGroupsList200ResponseAllOfItemsInner).GetMethod("ToJson").Invoke(value, null)));
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
                    return CatalogsProductGroupsList200ResponseAllOfItemsInner.FromJson(JObject.Load(reader).ToString(Formatting.None));
                case JsonToken.StartArray:
                    return CatalogsProductGroupsList200ResponseAllOfItemsInner.FromJson(JArray.Load(reader).ToString(Formatting.None));
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
