<?php
/**
 * AdsAnalyticsCreateAsyncResponse
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
 * Class representing the AdsAnalyticsCreateAsyncResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class AdsAnalyticsCreateAsyncResponse 
{
        /**
     * @var string|null
     * @SerializedName("report_status")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $reportStatus;

    /**
     * @var string|null
     * @SerializedName("token")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $token;

    /**
     * @var string|null
     * @SerializedName("message")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $message;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->reportStatus = isset($data['reportStatus']) ? $data['reportStatus'] : null;
        $this->token = isset($data['token']) ? $data['token'] : null;
        $this->message = isset($data['message']) ? $data['message'] : null;
    }

    /**
     * Gets reportStatus.
     *
     * @return string|null
     */
    public function getReportStatus()
    {
        return $this->reportStatus;
    }

    /**
     * Sets reportStatus.
     *
     * @param string|null $reportStatus
     *
     * @return $this
     */
    public function setReportStatus($reportStatus = null)
    {
        $this->reportStatus = $reportStatus;

        return $this;
    }

    /**
     * Gets token.
     *
     * @return string|null
     */
    public function getToken()
    {
        return $this->token;
    }

    /**
     * Sets token.
     *
     * @param string|null $token
     *
     * @return $this
     */
    public function setToken($token = null)
    {
        $this->token = $token;

        return $this;
    }

    /**
     * Gets message.
     *
     * @return string|null
     */
    public function getMessage()
    {
        return $this->message;
    }

    /**
     * Sets message.
     *
     * @param string|null $message
     *
     * @return $this
     */
    public function setMessage($message = null)
    {
        $this->message = $message;

        return $this;
    }
}


