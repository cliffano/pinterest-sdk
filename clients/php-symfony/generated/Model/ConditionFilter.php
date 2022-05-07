<?php
/**
 * ConditionFilter
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
 * Class representing the ConditionFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ConditionFilter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("CONDITION")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $cONDITION;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cONDITION = isset($data['cONDITION']) ? $data['cONDITION'] : null;
    }

    /**
     * Gets cONDITION.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getCONDITION(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->cONDITION;
    }

    /**
     * Sets cONDITION.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $cONDITION
     *
     * @return $this
     */
    public function setCONDITION(CatalogsProductGroupMultipleStringCriteria $cONDITION)
    {
        $this->cONDITION = $cONDITION;

        return $this;
    }
}


