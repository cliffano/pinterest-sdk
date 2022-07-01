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
using JsonSubTypes;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;
using System.Reflection;

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Pin media source.
    /// </summary>
    [JsonConverter(typeof(PinMediaSourceJsonConverter))]
    [DataContract(Name = "PinMediaSource")]
    public partial class PinMediaSource : AbstractOpenAPISchema, IEquatable<PinMediaSource>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSource" /> class
        /// with the <see cref="PinMediaSourceImageBase64" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of PinMediaSourceImageBase64.</param>
        public PinMediaSource(PinMediaSourceImageBase64 actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "oneOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSource" /> class
        /// with the <see cref="PinMediaSourceImageURL" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of PinMediaSourceImageURL.</param>
        public PinMediaSource(PinMediaSourceImageURL actualInstance)
        {
            this.IsNullable = false;
            this.SchemaType= "oneOf";
            this.ActualInstance = actualInstance ?? throw new ArgumentException("Invalid instance found. Must not be null.");
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSource" /> class
        /// with the <see cref="PinMediaSourceVideoID" /> class
        /// </summary>
        /// <param name="actualInstance">An instance of PinMediaSourceVideoID.</param>
        public PinMediaSource(PinMediaSourceVideoID actualInstance)
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
                if (value.GetType() == typeof(PinMediaSourceImageBase64))
                {
                    this._actualInstance = value;
                }
                else if (value.GetType() == typeof(PinMediaSourceImageURL))
                {
                    this._actualInstance = value;
                }
                else if (value.GetType() == typeof(PinMediaSourceVideoID))
                {
                    this._actualInstance = value;
                }
                else
                {
                    throw new ArgumentException("Invalid instance found. Must be the following types: PinMediaSourceImageBase64, PinMediaSourceImageURL, PinMediaSourceVideoID");
                }
            }
        }

        /// <summary>
        /// Get the actual instance of `PinMediaSourceImageBase64`. If the actual instanct is not `PinMediaSourceImageBase64`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of PinMediaSourceImageBase64</returns>
        public PinMediaSourceImageBase64 GetPinMediaSourceImageBase64()
        {
            return (PinMediaSourceImageBase64)this.ActualInstance;
        }

        /// <summary>
        /// Get the actual instance of `PinMediaSourceImageURL`. If the actual instanct is not `PinMediaSourceImageURL`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of PinMediaSourceImageURL</returns>
        public PinMediaSourceImageURL GetPinMediaSourceImageURL()
        {
            return (PinMediaSourceImageURL)this.ActualInstance;
        }

        /// <summary>
        /// Get the actual instance of `PinMediaSourceVideoID`. If the actual instanct is not `PinMediaSourceVideoID`,
        /// the InvalidClassException will be thrown
        /// </summary>
        /// <returns>An instance of PinMediaSourceVideoID</returns>
        public PinMediaSourceVideoID GetPinMediaSourceVideoID()
        {
            return (PinMediaSourceVideoID)this.ActualInstance;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PinMediaSource {\n");
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
            return JsonConvert.SerializeObject(this.ActualInstance, PinMediaSource.SerializerSettings);
        }

        /// <summary>
        /// Converts the JSON string into an instance of PinMediaSource
        /// </summary>
        /// <param name="jsonString">JSON string</param>
        /// <returns>An instance of PinMediaSource</returns>
        public static PinMediaSource FromJson(string jsonString)
        {
            PinMediaSource newPinMediaSource = null;

            if (jsonString == null)
            {
                return newPinMediaSource;
            }
            int match = 0;
            List<string> matchedTypes = new List<string>();

            try
            {
                // if it does not contains "AdditionalProperties", use SerializerSettings to deserialize
                if (typeof(PinMediaSourceImageBase64).GetProperty("AdditionalProperties") == null)
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceImageBase64>(jsonString, PinMediaSource.SerializerSettings));
                }
                else
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceImageBase64>(jsonString, PinMediaSource.AdditionalPropertiesSerializerSettings));
                }
                matchedTypes.Add("PinMediaSourceImageBase64");
                match++;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into PinMediaSourceImageBase64: {1}", jsonString, exception.ToString()));
            }

            try
            {
                // if it does not contains "AdditionalProperties", use SerializerSettings to deserialize
                if (typeof(PinMediaSourceImageURL).GetProperty("AdditionalProperties") == null)
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceImageURL>(jsonString, PinMediaSource.SerializerSettings));
                }
                else
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceImageURL>(jsonString, PinMediaSource.AdditionalPropertiesSerializerSettings));
                }
                matchedTypes.Add("PinMediaSourceImageURL");
                match++;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into PinMediaSourceImageURL: {1}", jsonString, exception.ToString()));
            }

            try
            {
                // if it does not contains "AdditionalProperties", use SerializerSettings to deserialize
                if (typeof(PinMediaSourceVideoID).GetProperty("AdditionalProperties") == null)
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceVideoID>(jsonString, PinMediaSource.SerializerSettings));
                }
                else
                {
                    newPinMediaSource = new PinMediaSource(JsonConvert.DeserializeObject<PinMediaSourceVideoID>(jsonString, PinMediaSource.AdditionalPropertiesSerializerSettings));
                }
                matchedTypes.Add("PinMediaSourceVideoID");
                match++;
            }
            catch (Exception exception)
            {
                // deserialization failed, try the next one
                System.Diagnostics.Debug.WriteLine(string.Format("Failed to deserialize `{0}` into PinMediaSourceVideoID: {1}", jsonString, exception.ToString()));
            }

            if (match == 0)
            {
                throw new InvalidDataException("The JSON string `" + jsonString + "` cannot be deserialized into any schema defined.");
            }
            else if (match > 1)
            {
                throw new InvalidDataException("The JSON string `" + jsonString + "` incorrectly matches more than one schema (should be exactly one match): " + matchedTypes);
            }

            // deserialization is considered successful at this point if no exception has been thrown.
            return newPinMediaSource;
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PinMediaSource);
        }

        /// <summary>
        /// Returns true if PinMediaSource instances are equal
        /// </summary>
        /// <param name="input">Instance of PinMediaSource to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSource input)
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
    /// Custom JSON converter for PinMediaSource
    /// </summary>
    public class PinMediaSourceJsonConverter : JsonConverter
    {
        /// <summary>
        /// To write the JSON string
        /// </summary>
        /// <param name="writer">JSON writer</param>
        /// <param name="value">Object to be converted into a JSON string</param>
        /// <param name="serializer">JSON Serializer</param>
        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue((string)(typeof(PinMediaSource).GetMethod("ToJson").Invoke(value, null)));
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
                return PinMediaSource.FromJson(JObject.Load(reader).ToString(Formatting.None));
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
