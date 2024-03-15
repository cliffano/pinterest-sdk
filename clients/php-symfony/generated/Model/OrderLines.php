<?php
/**
 * OrderLines
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the OrderLines model.
 *
 * Order Line
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class OrderLines 
{
        /**
     * Order line ID.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $id = null;

    /**
     * Always \&quot;orderline\&quot;.
     *
     * @var string|null
     * @SerializedName("type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $type = null;

    /**
     * Ad account ID.
     *
     * @var string|null
     * @SerializedName("ad_account_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $adAccountId = null;

    /**
     * Purchase order ID.
     *
     * @var string|null
     * @SerializedName("purchase_order_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $purchaseOrderId = null;

    /**
     * Start time. Unix timestamp.
     *
     * @var float|null
     * @SerializedName("start_time")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $startTime = null;

    /**
     * End time. Unix timestamp.
     *
     * @var float|null
     * @SerializedName("end_time")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $endTime = null;

    /**
     * Order line budget in micro currency.
     *
     * @var float|null
     * @SerializedName("budget")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $budget = null;

    /**
     * Order line paid budget in micro currency.
     *
     * @var float|null
     * @SerializedName("paid_budget")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $paidBudget = null;

    /**
     * Order line status.
     *
     * @var OrderLineStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?OrderLineStatus $status = null;

    /**
     * Order line name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * Order line paid type.
     *
     * @var OrderLinePaidType|null
     * @SerializedName("paid_type")
        * @Accessor(getter="getSerializedPaidType")
        * @Type("string")
     */
    protected ?OrderLinePaidType $paidType = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->type = array_key_exists('type', $data) ? $data['type'] : $this->type;
            $this->adAccountId = array_key_exists('adAccountId', $data) ? $data['adAccountId'] : $this->adAccountId;
            $this->purchaseOrderId = array_key_exists('purchaseOrderId', $data) ? $data['purchaseOrderId'] : $this->purchaseOrderId;
            $this->startTime = array_key_exists('startTime', $data) ? $data['startTime'] : $this->startTime;
            $this->endTime = array_key_exists('endTime', $data) ? $data['endTime'] : $this->endTime;
            $this->budget = array_key_exists('budget', $data) ? $data['budget'] : $this->budget;
            $this->paidBudget = array_key_exists('paidBudget', $data) ? $data['paidBudget'] : $this->paidBudget;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->paidType = array_key_exists('paidType', $data) ? $data['paidType'] : $this->paidType;
        }
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId(): ?string
    {
        return $this->id;
    }



    /**
     * Sets id.
     *
     * @param string|null $id  Order line ID.
     *
     * @return $this
     */
    public function setId(?string $id = null): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets type.
     *
     * @return string|null
     */
    public function getType(): ?string
    {
        return $this->type;
    }



    /**
     * Sets type.
     *
     * @param string|null $type  Always \"orderline\".
     *
     * @return $this
     */
    public function setType(?string $type = null): self
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets adAccountId.
     *
     * @return string|null
     */
    public function getAdAccountId(): ?string
    {
        return $this->adAccountId;
    }



    /**
     * Sets adAccountId.
     *
     * @param string|null $adAccountId  Ad account ID.
     *
     * @return $this
     */
    public function setAdAccountId(?string $adAccountId = null): self
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets purchaseOrderId.
     *
     * @return string|null
     */
    public function getPurchaseOrderId(): ?string
    {
        return $this->purchaseOrderId;
    }



    /**
     * Sets purchaseOrderId.
     *
     * @param string|null $purchaseOrderId  Purchase order ID.
     *
     * @return $this
     */
    public function setPurchaseOrderId(?string $purchaseOrderId = null): self
    {
        $this->purchaseOrderId = $purchaseOrderId;

        return $this;
    }

    /**
     * Gets startTime.
     *
     * @return float|null
     */
    public function getStartTime(): ?float
    {
        return $this->startTime;
    }



    /**
     * Sets startTime.
     *
     * @param float|null $startTime  Start time. Unix timestamp.
     *
     * @return $this
     */
    public function setStartTime(?float $startTime = null): self
    {
        $this->startTime = $startTime;

        return $this;
    }

    /**
     * Gets endTime.
     *
     * @return float|null
     */
    public function getEndTime(): ?float
    {
        return $this->endTime;
    }



    /**
     * Sets endTime.
     *
     * @param float|null $endTime  End time. Unix timestamp.
     *
     * @return $this
     */
    public function setEndTime(?float $endTime = null): self
    {
        $this->endTime = $endTime;

        return $this;
    }

    /**
     * Gets budget.
     *
     * @return float|null
     */
    public function getBudget(): ?float
    {
        return $this->budget;
    }



    /**
     * Sets budget.
     *
     * @param float|null $budget  Order line budget in micro currency.
     *
     * @return $this
     */
    public function setBudget(?float $budget = null): self
    {
        $this->budget = $budget;

        return $this;
    }

    /**
     * Gets paidBudget.
     *
     * @return float|null
     */
    public function getPaidBudget(): ?float
    {
        return $this->paidBudget;
    }



    /**
     * Sets paidBudget.
     *
     * @param float|null $paidBudget  Order line paid budget in micro currency.
     *
     * @return $this
     */
    public function setPaidBudget(?float $paidBudget = null): self
    {
        $this->paidBudget = $paidBudget;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return OrderLineStatus|null
     */
    public function getStatus(): ?OrderLineStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param OrderLineStatus|null $status  Order line status.
     *
     * @return $this
     */
    public function setStatus(?OrderLineStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Order line name.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets paidType.
     *
     * @return OrderLinePaidType|null
     */
    public function getPaidType(): ?OrderLinePaidType
    {
        return $this->paidType;
    }

    /**
    * Gets paidType for serialization.
    *
    * @return string|null
    */
    public function getSerializedPaidType(): string|null
    {
        return $this->paidType?->value ? (string) $this->paidType->value : null;
    }


    /**
     * Sets paidType.
     *
     * @param OrderLinePaidType|null $paidType  Order line paid type.
     *
     * @return $this
     */
    public function setPaidType(?OrderLinePaidType $paidType = null): self
    {
        $this->paidType = $paidType;

        return $this;
    }
}

