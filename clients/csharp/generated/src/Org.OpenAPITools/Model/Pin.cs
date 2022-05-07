/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// Pin
    /// </summary>
    [DataContract]
    public partial class Pin :  IEquatable<Pin>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Pin" /> class.
        /// </summary>
        /// <param name="link">link.</param>
        /// <param name="title">title.</param>
        /// <param name="description">description.</param>
        /// <param name="altText">altText.</param>
        /// <param name="boardId">The board to which this Pin belongs..</param>
        /// <param name="boardSectionId">The board section to which this Pin belongs..</param>
        /// <param name="mediaSource">mediaSource.</param>
        public Pin(string link = default(string), string title = default(string), string description = default(string), string altText = default(string), string boardId = default(string), string boardSectionId = default(string), PinMediaSource mediaSource = default(PinMediaSource))
        {
            this.Link = link;
            this.Title = title;
            this.Description = description;
            this.AltText = altText;
            this.BoardSectionId = boardSectionId;
            this.Link = link;
            this.Title = title;
            this.Description = description;
            this.AltText = altText;
            this.BoardId = boardId;
            this.BoardSectionId = boardSectionId;
            this.MediaSource = mediaSource;
        }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; private set; }

        /// <summary>
        /// Gets or Sets CreatedAt
        /// </summary>
        [DataMember(Name="created_at", EmitDefaultValue=false)]
        public DateTime CreatedAt { get; private set; }

        /// <summary>
        /// Gets or Sets Link
        /// </summary>
        [DataMember(Name="link", EmitDefaultValue=true)]
        public string Link { get; set; }

        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name="title", EmitDefaultValue=true)]
        public string Title { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=true)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets AltText
        /// </summary>
        [DataMember(Name="alt_text", EmitDefaultValue=true)]
        public string AltText { get; set; }

        /// <summary>
        /// The board to which this Pin belongs.
        /// </summary>
        /// <value>The board to which this Pin belongs.</value>
        [DataMember(Name="board_id", EmitDefaultValue=false)]
        public string BoardId { get; set; }

        /// <summary>
        /// The board section to which this Pin belongs.
        /// </summary>
        /// <value>The board section to which this Pin belongs.</value>
        [DataMember(Name="board_section_id", EmitDefaultValue=true)]
        public string BoardSectionId { get; set; }

        /// <summary>
        /// Gets or Sets BoardOwner
        /// </summary>
        [DataMember(Name="board_owner", EmitDefaultValue=false)]
        public BoardOwner BoardOwner { get; private set; }

        /// <summary>
        /// Gets or Sets Media
        /// </summary>
        [DataMember(Name="media", EmitDefaultValue=false)]
        public PinMedia Media { get; private set; }

        /// <summary>
        /// Gets or Sets MediaSource
        /// </summary>
        [DataMember(Name="media_source", EmitDefaultValue=false)]
        public PinMediaSource MediaSource { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Pin {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Link: ").Append(Link).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  AltText: ").Append(AltText).Append("\n");
            sb.Append("  BoardId: ").Append(BoardId).Append("\n");
            sb.Append("  BoardSectionId: ").Append(BoardSectionId).Append("\n");
            sb.Append("  BoardOwner: ").Append(BoardOwner).Append("\n");
            sb.Append("  Media: ").Append(Media).Append("\n");
            sb.Append("  MediaSource: ").Append(MediaSource).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as Pin);
        }

        /// <summary>
        /// Returns true if Pin instances are equal
        /// </summary>
        /// <param name="input">Instance of Pin to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Pin input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.CreatedAt == input.CreatedAt ||
                    (this.CreatedAt != null &&
                    this.CreatedAt.Equals(input.CreatedAt))
                ) && 
                (
                    this.Link == input.Link ||
                    (this.Link != null &&
                    this.Link.Equals(input.Link))
                ) && 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.AltText == input.AltText ||
                    (this.AltText != null &&
                    this.AltText.Equals(input.AltText))
                ) && 
                (
                    this.BoardId == input.BoardId ||
                    (this.BoardId != null &&
                    this.BoardId.Equals(input.BoardId))
                ) && 
                (
                    this.BoardSectionId == input.BoardSectionId ||
                    (this.BoardSectionId != null &&
                    this.BoardSectionId.Equals(input.BoardSectionId))
                ) && 
                (
                    this.BoardOwner == input.BoardOwner ||
                    (this.BoardOwner != null &&
                    this.BoardOwner.Equals(input.BoardOwner))
                ) && 
                (
                    this.Media == input.Media ||
                    (this.Media != null &&
                    this.Media.Equals(input.Media))
                ) && 
                (
                    this.MediaSource == input.MediaSource ||
                    (this.MediaSource != null &&
                    this.MediaSource.Equals(input.MediaSource))
                );
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
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.Link != null)
                    hashCode = hashCode * 59 + this.Link.GetHashCode();
                if (this.Title != null)
                    hashCode = hashCode * 59 + this.Title.GetHashCode();
                if (this.Description != null)
                    hashCode = hashCode * 59 + this.Description.GetHashCode();
                if (this.AltText != null)
                    hashCode = hashCode * 59 + this.AltText.GetHashCode();
                if (this.BoardId != null)
                    hashCode = hashCode * 59 + this.BoardId.GetHashCode();
                if (this.BoardSectionId != null)
                    hashCode = hashCode * 59 + this.BoardSectionId.GetHashCode();
                if (this.BoardOwner != null)
                    hashCode = hashCode * 59 + this.BoardOwner.GetHashCode();
                if (this.Media != null)
                    hashCode = hashCode * 59 + this.Media.GetHashCode();
                if (this.MediaSource != null)
                    hashCode = hashCode * 59 + this.MediaSource.GetHashCode();
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


            // BoardId (string) pattern
            Regex regexBoardId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexBoardId.Match(this.BoardId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for BoardId, must match a pattern of " + regexBoardId, new [] { "BoardId" });
            }



            // BoardSectionId (string) pattern
            Regex regexBoardSectionId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexBoardSectionId.Match(this.BoardSectionId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for BoardSectionId, must match a pattern of " + regexBoardSectionId, new [] { "BoardSectionId" });
            }

            yield break;
        }
    }

}
