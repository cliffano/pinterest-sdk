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
    /// Order Line
    /// </summary>
    [DataContract(Name = "OrderLines")]
    public partial class OrderLines : IValidatableObject
    {

        /// <summary>
        /// Order line status.
        /// </summary>
        /// <value>Order line status.</value>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public OrderLineStatus? Status { get; set; }

        /// <summary>
        /// Order line paid type.
        /// </summary>
        /// <value>Order line paid type.</value>
        [DataMember(Name = "paid_type", EmitDefaultValue = true)]
        public OrderLinePaidType? PaidType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="OrderLines" /> class.
        /// </summary>
        /// <param name="id">Order line ID..</param>
        /// <param name="type">Always \&quot;orderline\&quot;..</param>
        /// <param name="adAccountId">Ad account ID..</param>
        /// <param name="purchaseOrderId">Purchase order ID..</param>
        /// <param name="startTime">Start time. Unix timestamp..</param>
        /// <param name="endTime">End time. Unix timestamp..</param>
        /// <param name="budget">Order line budget in micro currency..</param>
        /// <param name="paidBudget">Order line paid budget in micro currency..</param>
        /// <param name="status">Order line status..</param>
        /// <param name="name">Order line name..</param>
        /// <param name="paidType">Order line paid type..</param>
        public OrderLines(string id = default(string), string type = default(string), string adAccountId = default(string), string purchaseOrderId = default(string), decimal startTime = default(decimal), decimal? endTime = default(decimal?), decimal? budget = default(decimal?), decimal? paidBudget = default(decimal?), OrderLineStatus? status = default(OrderLineStatus?), string name = default(string), OrderLinePaidType? paidType = default(OrderLinePaidType?))
        {
            this.Id = id;
            this.Type = type;
            this.AdAccountId = adAccountId;
            this.PurchaseOrderId = purchaseOrderId;
            this.StartTime = startTime;
            this.EndTime = endTime;
            this.Budget = budget;
            this.PaidBudget = paidBudget;
            this.Status = status;
            this.Name = name;
            this.PaidType = paidType;
        }

        /// <summary>
        /// Order line ID.
        /// </summary>
        /// <value>Order line ID.</value>
        /// <example>2680059592705</example>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Always \&quot;orderline\&quot;.
        /// </summary>
        /// <value>Always \&quot;orderline\&quot;.</value>
        /// <example>orderline</example>
        [DataMember(Name = "type", EmitDefaultValue = false)]
        public string Type { get; set; }

        /// <summary>
        /// Ad account ID.
        /// </summary>
        /// <value>Ad account ID.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "ad_account_id", EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Purchase order ID.
        /// </summary>
        /// <value>Purchase order ID.</value>
        /// <example>PO12345</example>
        [DataMember(Name = "purchase_order_id", EmitDefaultValue = true)]
        public string PurchaseOrderId { get; set; }

        /// <summary>
        /// Start time. Unix timestamp.
        /// </summary>
        /// <value>Start time. Unix timestamp.</value>
        /// <example>1452208622</example>
        [DataMember(Name = "start_time", EmitDefaultValue = false)]
        public decimal StartTime { get; set; }

        /// <summary>
        /// End time. Unix timestamp.
        /// </summary>
        /// <value>End time. Unix timestamp.</value>
        /// <example>1461269616</example>
        [DataMember(Name = "end_time", EmitDefaultValue = true)]
        public decimal? EndTime { get; set; }

        /// <summary>
        /// Order line budget in micro currency.
        /// </summary>
        /// <value>Order line budget in micro currency.</value>
        /// <example>5000000</example>
        [DataMember(Name = "budget", EmitDefaultValue = true)]
        public decimal? Budget { get; set; }

        /// <summary>
        /// Order line paid budget in micro currency.
        /// </summary>
        /// <value>Order line paid budget in micro currency.</value>
        /// <example>5000000</example>
        [DataMember(Name = "paid_budget", EmitDefaultValue = true)]
        public decimal? PaidBudget { get; set; }

        /// <summary>
        /// Order line name.
        /// </summary>
        /// <value>Order line name.</value>
        /// <example>Order Line Name 1</example>
        [DataMember(Name = "name", EmitDefaultValue = true)]
        public string Name { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class OrderLines {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  PurchaseOrderId: ").Append(PurchaseOrderId).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  Budget: ").Append(Budget).Append("\n");
            sb.Append("  PaidBudget: ").Append(PaidBudget).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PaidType: ").Append(PaidType).Append("\n");
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
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            if (this.Id != null) {
                // Id (string) pattern
                Regex regexId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexId.Match(this.Id).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Id, must match a pattern of " + regexId, new [] { "Id" });
                }
            }

            yield break;
        }
    }

}
