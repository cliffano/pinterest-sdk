<?php
/**
 * MediaUploadAllOfUploadParameters
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
    protected ?string $xAmzDate = null;

    /**
     * @var string|null
     * @SerializedName("x-amz-signature")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $xAmzSignature = null;

    /**
     * @var string|null
     * @SerializedName("x-amz-security-token")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $xAmzSecurityToken = null;

    /**
     * @var string|null
     * @SerializedName("x-amz-algorithm")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $xAmzAlgorithm = null;

    /**
     * @var string|null
     * @SerializedName("key")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $key = null;

    /**
     * @var string|null
     * @SerializedName("policy")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $policy = null;

    /**
     * @var string|null
     * @SerializedName("x-amz-credential")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $xAmzCredential = null;

    /**
     * @var string|null
     * @SerializedName("Content-Type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $contentType = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->xAmzDate = array_key_exists('xAmzDate', $data) ? $data['xAmzDate'] : $this->xAmzDate;
            $this->xAmzSignature = array_key_exists('xAmzSignature', $data) ? $data['xAmzSignature'] : $this->xAmzSignature;
            $this->xAmzSecurityToken = array_key_exists('xAmzSecurityToken', $data) ? $data['xAmzSecurityToken'] : $this->xAmzSecurityToken;
            $this->xAmzAlgorithm = array_key_exists('xAmzAlgorithm', $data) ? $data['xAmzAlgorithm'] : $this->xAmzAlgorithm;
            $this->key = array_key_exists('key', $data) ? $data['key'] : $this->key;
            $this->policy = array_key_exists('policy', $data) ? $data['policy'] : $this->policy;
            $this->xAmzCredential = array_key_exists('xAmzCredential', $data) ? $data['xAmzCredential'] : $this->xAmzCredential;
            $this->contentType = array_key_exists('contentType', $data) ? $data['contentType'] : $this->contentType;
        }
    }

    /**
     * Gets xAmzDate.
     *
     * @return string|null
     */
    public function getXAmzDate(): ?string
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
    public function setXAmzDate(?string $xAmzDate = null): self
    {
        $this->xAmzDate = $xAmzDate;

        return $this;
    }

    /**
     * Gets xAmzSignature.
     *
     * @return string|null
     */
    public function getXAmzSignature(): ?string
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
    public function setXAmzSignature(?string $xAmzSignature = null): self
    {
        $this->xAmzSignature = $xAmzSignature;

        return $this;
    }

    /**
     * Gets xAmzSecurityToken.
     *
     * @return string|null
     */
    public function getXAmzSecurityToken(): ?string
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
    public function setXAmzSecurityToken(?string $xAmzSecurityToken = null): self
    {
        $this->xAmzSecurityToken = $xAmzSecurityToken;

        return $this;
    }

    /**
     * Gets xAmzAlgorithm.
     *
     * @return string|null
     */
    public function getXAmzAlgorithm(): ?string
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
    public function setXAmzAlgorithm(?string $xAmzAlgorithm = null): self
    {
        $this->xAmzAlgorithm = $xAmzAlgorithm;

        return $this;
    }

    /**
     * Gets key.
     *
     * @return string|null
     */
    public function getKey(): ?string
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
    public function setKey(?string $key = null): self
    {
        $this->key = $key;

        return $this;
    }

    /**
     * Gets policy.
     *
     * @return string|null
     */
    public function getPolicy(): ?string
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
    public function setPolicy(?string $policy = null): self
    {
        $this->policy = $policy;

        return $this;
    }

    /**
     * Gets xAmzCredential.
     *
     * @return string|null
     */
    public function getXAmzCredential(): ?string
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
    public function setXAmzCredential(?string $xAmzCredential = null): self
    {
        $this->xAmzCredential = $xAmzCredential;

        return $this;
    }

    /**
     * Gets contentType.
     *
     * @return string|null
     */
    public function getContentType(): ?string
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
    public function setContentType(?string $contentType = null): self
    {
        $this->contentType = $contentType;

        return $this;
    }
}


