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
    /// Object holding a group of filters for a catalog product group
    /// </summary>
    [JsonConverter(typeof(CatalogsProductGroupFiltersJsonConverter))]
    [DataContract(Name = "CatalogsProductGroupFilters")]
    public partial class CatalogsProductGroupFilters : AbstractOpenAPISchema, IEquatable<CatalogsProductGroupFilters>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupFilters" /> class
        /// with the <see cref="CatalogsProductGroupFiltersAllOf" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of CatalogsProductGroupFiltersAllOf.</param>
        public CatalogsProductGroupFilters(CatalogsProductGroupFiltersAllOf actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "anyOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupFilters" /> class
        /// with the <see cref="CatalogsProductGroupFiltersAnyOf" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of CatalogsProductGroupFiltersAnyOf.</param>
        public CatalogsProductGroupFilters(CatalogsProductGroupFiltersAnyOf actualInstance)
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
                if (value.GetType() == typeof(CatalogsProductGroupFiltersAllOf))
                {
                    this._actualInstance = value;
                }
                else if (value.GetType() == typeof(CatalogsProductGroupFiltersAnyOf))
                {
                    this._actualInstance = value;
                }
                else
                {
                    throw new ArgumentException("Invalid instance found. Must be the following types: CatalogsProductGroupFiltersAllOf, CatalogsProductGroupFiltersAnyOf");
                }
            }
        }

        /// <summary>
        /// Get the actual instance of `CatalogsProductGroupFiltersAllOf`. If the actual instance is not `CatalogsProductGroupFiltersAllOf`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of CatalogsProductGroupFiltersAllOf</returns>
        public CatalogsProductGroupFiltersAllOf GetCatalogsProductGroupFiltersAllOf()
        {
            return (CatalogsProductGroupFiltersAllOf)this.ActualInstance;
        }

        /// <summary>
        /// Get the actual instance of `CatalogsProductGroupFiltersAnyOf`. If the actual instance is not `CatalogsProductGroupFiltersAnyOf`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of CatalogsProductGroupFiltersAnyOf</returns>
        public CatalogsProductGroupFiltersAnyOf GetCatalogsProductGroupFiltersAnyOf()
        {
            return (CatalogsProductGroupFiltersAnyOf)this.ActualInstance;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupFilters {\n");
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
            return JsonConvert.SerializeObject(this.ActualInstance, CatalogsProductGroupFilters.SerializerSettings);
        }

        /// <summary>
        /// Converts the JSON string into an instance of CatalogsProductGroupFilters
        /// </summary>
        /// <param name="jsonString">JSON string</param>
        /// <returns>An instance of CatalogsProductGroupFilters</returns>
        public static CatalogsProductGroupFilters FromJson(string jsonString)
        {
            CatalogsProductGroupFilters newCatalogsProductGroupFilters = null;

            if (string.IsNullOrEmpty(jsonString))
            {
                return newCatalogsProductGroupFilters;
            }

            try
            {
                newCatalogsProductGroupFilters = new CatalogsProductGroupFilters(JsonConvert.DeserializeObject<CatalogsProductGroupFiltersAllOf>(jsonString, CatalogsProductGroupFilters.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newCatalogsProductGroupFilters;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into CatalogsProductGroupFiltersAllOf: {1}", jsonString, exception.ToString()));
            }

            try
            {
                newCatalogsProductGroupFilters = new CatalogsProductGroupFilters(JsonConvert.DeserializeObject<CatalogsProductGroupFiltersAnyOf>(jsonString, CatalogsProductGroupFilters.SerializerSettings));
                // deserialization is considered successful at this point if no exception has been thrown.
                return newCatalogsProductGroupFilters;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into CatalogsProductGroupFiltersAnyOf: {1}", jsonString, exception.ToString()));
            }

            // no match found, throw an exception
            throw new InvalidDataException("The JSON string `" + jsonString + "` cannot be deserialized into any schema defined.");
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as CatalogsProductGroupFilters);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupFilters instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsProductGroupFilters to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupFilters input)
        {
            if (input == null)
                return false;

            return this.ActualInstance.Equals(input.ActualInstance);
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.ActualInstance != null)
                    hashCode = hashCode * 59 + this.ActualInstance.GetHashCode();
                return hashCode;
            }
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
    /// Custom JSON converter for CatalogsProductGroupFilters
    /// </summary>
    public class CatalogsProductGroupFiltersJsonConverter : JsonConverter
    {
        /// <summary>
        /// To write the JSON string
        /// </summary>
        /// <param name="writer">JSON writer</param>
        /// <param name="value">Object to be converted into a JSON string</param>
        /// <param name="serializer">JSON Serializer</param>
        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue((string)(typeof(CatalogsProductGroupFilters).GetMethod("ToJson").Invoke(value, null)));
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
            if(reader.TokenType != JsonToken.Null)
            {
                return CatalogsProductGroupFilters.FromJson(JObject.Load(reader).ToString(Formatting.None));
            }
            return null;
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
