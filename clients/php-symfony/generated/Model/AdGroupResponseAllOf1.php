<?php
/**
 * AdGroupResponseAllOf1
 *
 * PHP version 7.1.3
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
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the AdGroupResponseAllOf1 model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class AdGroupResponseAllOf1 
{
        /**
     * Campaign ID of the ad group.
     *
     * @var string|null
     * @SerializedName("campaign_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $campaignId;

    /**
     * @var OpenAPI\Server\Model\ActionType|null
     * @SerializedName("billable_event")
     * @Assert\Type("OpenAPI\Server\Model\ActionType")
     * @Type("OpenAPI\Server\Model\ActionType")
     */
    protected $billableEvent;

    /**
     * Ad group ID.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $id;

    /**
     * Always \&quot;adgroup\&quot;.
     *
     * @var string|null
     * @SerializedName("type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $type;

    /**
     * Advertiser ID.
     *
     * @var string|null
     * @SerializedName("ad_account_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $adAccountId;

    /**
     * Ad group creation time. Unix timestamp in seconds.
     *
     * @var int|null
     * @SerializedName("created_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $createdTime;

    /**
     * Ad group last update time. Unix timestamp in seconds.
     *
     * @var int|null
     * @SerializedName("updated_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $updatedTime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->campaignId = isset($data['campaignId']) ? $data['campaignId'] : null;
        $this->billableEvent = isset($data['billableEvent']) ? $data['billableEvent'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->type = isset($data['type']) ? $data['type'] : null;
        $this->adAccountId = isset($data['adAccountId']) ? $data['adAccountId'] : null;
        $this->createdTime = isset($data['createdTime']) ? $data['createdTime'] : null;
        $this->updatedTime = isset($data['updatedTime']) ? $data['updatedTime'] : null;
    }

    /**
     * Gets campaignId.
     *
     * @return string|null
     */
    public function getCampaignId()
    {
        return $this->campaignId;
    }

    /**
     * Sets campaignId.
     *
     * @param string|null $campaignId  Campaign ID of the ad group.
     *
     * @return $this
     */
    public function setCampaignId($campaignId = null)
    {
        $this->campaignId = $campaignId;

        return $this;
    }

    /**
     * Gets billableEvent.
     *
     * @return OpenAPI\Server\Model\ActionType|null
     */
    public function getBillableEvent(): ?ActionType
    {
        return $this->billableEvent;
    }

    /**
     * Sets billableEvent.
     *
     * @param OpenAPI\Server\Model\ActionType|null $billableEvent
     *
     * @return $this
     */
    public function setBillableEvent(ActionType $billableEvent = null)
    {
        $this->billableEvent = $billableEvent;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id  Ad group ID.
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets type.
     *
     * @return string|null
     */
    public function getType()
    {
        return $this->type;
    }

    /**
     * Sets type.
     *
     * @param string|null $type  Always \"adgroup\".
     *
     * @return $this
     */
    public function setType($type = null)
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets adAccountId.
     *
     * @return string|null
     */
    public function getAdAccountId()
    {
        return $this->adAccountId;
    }

    /**
     * Sets adAccountId.
     *
     * @param string|null $adAccountId  Advertiser ID.
     *
     * @return $this
     */
    public function setAdAccountId($adAccountId = null)
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets createdTime.
     *
     * @return int|null
     */
    public function getCreatedTime()
    {
        return $this->createdTime;
    }

    /**
     * Sets createdTime.
     *
     * @param int|null $createdTime  Ad group creation time. Unix timestamp in seconds.
     *
     * @return $this
     */
    public function setCreatedTime($createdTime = null)
    {
        $this->createdTime = $createdTime;

        return $this;
    }

    /**
     * Gets updatedTime.
     *
     * @return int|null
     */
    public function getUpdatedTime()
    {
        return $this->updatedTime;
    }

    /**
     * Sets updatedTime.
     *
     * @param int|null $updatedTime  Ad group last update time. Unix timestamp in seconds.
     *
     * @return $this
     */
    public function setUpdatedTime($updatedTime = null)
    {
        $this->updatedTime = $updatedTime;

        return $this;
    }
}

