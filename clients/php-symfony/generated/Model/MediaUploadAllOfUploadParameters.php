<?php
/**
 * MediaUploadAllOfUploadParameters
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
 * Class representing the MediaUploadAllOfUploadParameters model.
 *
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class MediaUploadAllOfUploadParameters 
{
        /**
     * @var string|null
     * @SerializedName("x-amz-date")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $xAmzDate;

    /**
     * @var string|null
     * @SerializedName("x-amz-signature")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $xAmzSignature;

    /**
     * @var string|null
     * @SerializedName("x-amz-security-token")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $xAmzSecurityToken;

    /**
     * @var string|null
     * @SerializedName("x-amz-algorithm")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $xAmzAlgorithm;

    /**
     * @var string|null
     * @SerializedName("key")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $key;

    /**
     * @var string|null
     * @SerializedName("policy")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $policy;

    /**
     * @var string|null
     * @SerializedName("x-amz-credential")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $xAmzCredential;

    /**
     * @var string|null
     * @SerializedName("Content-Type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $contentType;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->xAmzDate = isset($data['xAmzDate']) ? $data['xAmzDate'] : null;
        $this->xAmzSignature = isset($data['xAmzSignature']) ? $data['xAmzSignature'] : null;
        $this->xAmzSecurityToken = isset($data['xAmzSecurityToken']) ? $data['xAmzSecurityToken'] : null;
        $this->xAmzAlgorithm = isset($data['xAmzAlgorithm']) ? $data['xAmzAlgorithm'] : null;
        $this->key = isset($data['key']) ? $data['key'] : null;
        $this->policy = isset($data['policy']) ? $data['policy'] : null;
        $this->xAmzCredential = isset($data['xAmzCredential']) ? $data['xAmzCredential'] : null;
        $this->contentType = isset($data['contentType']) ? $data['contentType'] : null;
    }

    /**
     * Gets xAmzDate.
     *
     * @return string|null
     */
    public function getXAmzDate()
    {
        return $this->xAmzDate;
    }

    /**
     * Sets xAmzDate.
     *
     * @param string|null $xAmzDate
     *
     * @return $this
     */
    public function setXAmzDate($xAmzDate = null)
    {
        $this->xAmzDate = $xAmzDate;

        return $this;
    }

    /**
     * Gets xAmzSignature.
     *
     * @return string|null
     */
    public function getXAmzSignature()
    {
        return $this->xAmzSignature;
    }

    /**
     * Sets xAmzSignature.
     *
     * @param string|null $xAmzSignature
     *
     * @return $this
     */
    public function setXAmzSignature($xAmzSignature = null)
    {
        $this->xAmzSignature = $xAmzSignature;

        return $this;
    }

    /**
     * Gets xAmzSecurityToken.
     *
     * @return string|null
     */
    public function getXAmzSecurityToken()
    {
        return $this->xAmzSecurityToken;
    }

    /**
     * Sets xAmzSecurityToken.
     *
     * @param string|null $xAmzSecurityToken
     *
     * @return $this
     */
    public function setXAmzSecurityToken($xAmzSecurityToken = null)
    {
        $this->xAmzSecurityToken = $xAmzSecurityToken;

        return $this;
    }

    /**
     * Gets xAmzAlgorithm.
     *
     * @return string|null
     */
    public function getXAmzAlgorithm()
    {
        return $this->xAmzAlgorithm;
    }

    /**
     * Sets xAmzAlgorithm.
     *
     * @param string|null $xAmzAlgorithm
     *
     * @return $this
     */
    public function setXAmzAlgorithm($xAmzAlgorithm = null)
    {
        $this->xAmzAlgorithm = $xAmzAlgorithm;

        return $this;
    }

    /**
     * Gets key.
     *
     * @return string|null
     */
    public function getKey()
    {
        return $this->key;
    }

    /**
     * Sets key.
     *
     * @param string|null $key
     *
     * @return $this
     */
    public function setKey($key = null)
    {
        $this->key = $key;

        return $this;
    }

    /**
     * Gets policy.
     *
     * @return string|null
     */
    public function getPolicy()
    {
        return $this->policy;
    }

    /**
     * Sets policy.
     *
     * @param string|null $policy
     *
     * @return $this
     */
    public function setPolicy($policy = null)
    {
        $this->policy = $policy;

        return $this;
    }

    /**
     * Gets xAmzCredential.
     *
     * @return string|null
     */
    public function getXAmzCredential()
    {
        return $this->xAmzCredential;
    }

    /**
     * Sets xAmzCredential.
     *
     * @param string|null $xAmzCredential
     *
     * @return $this
     */
    public function setXAmzCredential($xAmzCredential = null)
    {
        $this->xAmzCredential = $xAmzCredential;

        return $this;
    }

    /**
     * Gets contentType.
     *
     * @return string|null
     */
    public function getContentType()
    {
        return $this->contentType;
    }

    /**
     * Sets contentType.
     *
     * @param string|null $contentType
     *
     * @return $this
     */
    public function setContentType($contentType = null)
    {
        $this->contentType = $contentType;

        return $this;
    }
}


