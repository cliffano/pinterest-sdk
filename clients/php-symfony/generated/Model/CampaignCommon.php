<?php
/**
 * CampaignCommon
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
 * Contact: blah@cliffano.com
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
 * Class representing the CampaignCommon model.
 *
 * Campaign Data
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CampaignCommon 
{
        /**
     * Campaign&#39;s Advertiser ID.
     *
     * @var string
     * @SerializedName("ad_account_id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $adAccountId;

    /**
     * Campaign name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $name;

    /**
     * @var EntityStatus|null
     * @SerializedName("status")
     * @Assert\Type("EntityStatus")
     * @Type("EntityStatus")
     */
    protected $status;

    /**
     * Campaign total spending cap.
     *
     * @var int|null
     * @SerializedName("lifetime_spend_cap")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $lifetimeSpendCap;

    /**
     * Campaign daily spending cap.
     *
     * @var int|null
     * @SerializedName("daily_spend_cap")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $dailySpendCap;

    /**
     * Order line ID that appears on the invoice.
     *
     * @var string|null
     * @SerializedName("order_line_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected $orderLineId;

    /**
     * @var TrackingUrls|null
     * @SerializedName("tracking_urls")
     * @Assert\Type("TrackingUrls")
     * @Type("TrackingUrls")
     */
    protected $trackingUrls;

    /**
     * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     *
     * @var int|null
     * @SerializedName("start_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $startTime;

    /**
     * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     *
     * @var int|null
     * @SerializedName("end_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $endTime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->adAccountId = isset($data['adAccountId']) ? $data['adAccountId'] : null;
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->status = isset($data['status']) ? $data['status'] : 'ACTIVE';
        $this->lifetimeSpendCap = isset($data['lifetimeSpendCap']) ? $data['lifetimeSpendCap'] : null;
        $this->dailySpendCap = isset($data['dailySpendCap']) ? $data['dailySpendCap'] : null;
        $this->orderLineId = isset($data['orderLineId']) ? $data['orderLineId'] : null;
        $this->trackingUrls = isset($data['trackingUrls']) ? $data['trackingUrls'] : null;
        $this->startTime = isset($data['startTime']) ? $data['startTime'] : null;
        $this->endTime = isset($data['endTime']) ? $data['endTime'] : null;
    }

    /**
     * Gets adAccountId.
     *
     * @return string
     */
    public function getAdAccountId()
    {
        return $this->adAccountId;
    }

    /**
     * Sets adAccountId.
     *
     * @param string $adAccountId  Campaign's Advertiser ID.
     *
     * @return $this
     */
    public function setAdAccountId($adAccountId)
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param string|null $name  Campaign name.
     *
     * @return $this
     */
    public function setName($name = null)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return EntityStatus|null
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Sets status.
     *
     * @param EntityStatus|null $status
     *
     * @return $this
     */
    public function setStatus($status = null)
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets lifetimeSpendCap.
     *
     * @return int|null
     */
    public function getLifetimeSpendCap()
    {
        return $this->lifetimeSpendCap;
    }

    /**
     * Sets lifetimeSpendCap.
     *
     * @param int|null $lifetimeSpendCap  Campaign total spending cap.
     *
     * @return $this
     */
    public function setLifetimeSpendCap($lifetimeSpendCap = null)
    {
        $this->lifetimeSpendCap = $lifetimeSpendCap;

        return $this;
    }

    /**
     * Gets dailySpendCap.
     *
     * @return int|null
     */
    public function getDailySpendCap()
    {
        return $this->dailySpendCap;
    }

    /**
     * Sets dailySpendCap.
     *
     * @param int|null $dailySpendCap  Campaign daily spending cap.
     *
     * @return $this
     */
    public function setDailySpendCap($dailySpendCap = null)
    {
        $this->dailySpendCap = $dailySpendCap;

        return $this;
    }

    /**
     * Gets orderLineId.
     *
     * @return string|null
     */
    public function getOrderLineId()
    {
        return $this->orderLineId;
    }

    /**
     * Sets orderLineId.
     *
     * @param string|null $orderLineId  Order line ID that appears on the invoice.
     *
     * @return $this
     */
    public function setOrderLineId($orderLineId = null)
    {
        $this->orderLineId = $orderLineId;

        return $this;
    }

    /**
     * Gets trackingUrls.
     *
     * @return TrackingUrls|null
     */
    public function getTrackingUrls()
    {
        return $this->trackingUrls;
    }

    /**
     * Sets trackingUrls.
     *
     * @param TrackingUrls|null $trackingUrls
     *
     * @return $this
     */
    public function setTrackingUrls($trackingUrls = null)
    {
        $this->trackingUrls = $trackingUrls;

        return $this;
    }

    /**
     * Gets startTime.
     *
     * @return int|null
     */
    public function getStartTime()
    {
        return $this->startTime;
    }

    /**
     * Sets startTime.
     *
     * @param int|null $startTime  Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     *
     * @return $this
     */
    public function setStartTime($startTime = null)
    {
        $this->startTime = $startTime;

        return $this;
    }

    /**
     * Gets endTime.
     *
     * @return int|null
     */
    public function getEndTime()
    {
        return $this->endTime;
    }

    /**
     * Sets endTime.
     *
     * @param int|null $endTime  Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     *
     * @return $this
     */
    public function setEndTime($endTime = null)
    {
        $this->endTime = $endTime;

        return $this;
    }
}


