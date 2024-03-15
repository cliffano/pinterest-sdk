<?php
/**
 * SSIOInsertionOrderCommon
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
 * Class representing the SSIOInsertionOrderCommon model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class SSIOInsertionOrderCommon 
{
        /**
     * Starting date of time period. Format: YYYY-MM-DD
     *
     * @var string|null
     * @SerializedName("start_date")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(\\d{4})-(\\d{2})-(\\d{2})$/")
     */
    protected ?string $startDate = null;

    /**
     * End date of time period. Format: YYYY-MM-DD
     *
     * @var string|null
     * @SerializedName("end_date")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(\\d{4})-(\\d{2})-(\\d{2})$/")
     */
    protected ?string $endDate = null;

    /**
     * The po number
     *
     * @var string|null
     * @SerializedName("po_number")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $poNumber = null;

    /**
     * If Budget order line, the budget amount.
     *
     * @var float|null
     * @SerializedName("budget_amount")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $budgetAmount = null;

    /**
     * The billing contact first name
     *
     * @var string|null
     * @SerializedName("billing_contact_firstname")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $billingContactFirstname = null;

    /**
     * The billing contact last name
     *
     * @var string|null
     * @SerializedName("billing_contact_lastname")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $billingContactLastname = null;

    /**
     * The billing contact email
     *
     * @var string|null
     * @SerializedName("billing_contact_email")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $billingContactEmail = null;

    /**
     * The media contact first name
     *
     * @var string|null
     * @SerializedName("media_contact_firstname")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $mediaContactFirstname = null;

    /**
     * The media contact last name
     *
     * @var string|null
     * @SerializedName("media_contact_lastname")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $mediaContactLastname = null;

    /**
     * The media contact email
     *
     * @var string|null
     * @SerializedName("media_contact_email")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $mediaContactEmail = null;

    /**
     * URL link for agency
     *
     * @var string|null
     * @SerializedName("agency_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $agencyLink = null;

    /**
     * The email of user submitting the insertion order
     *
     * @var string|null
     * @SerializedName("user_email")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $userEmail = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->startDate = array_key_exists('startDate', $data) ? $data['startDate'] : $this->startDate;
            $this->endDate = array_key_exists('endDate', $data) ? $data['endDate'] : $this->endDate;
            $this->poNumber = array_key_exists('poNumber', $data) ? $data['poNumber'] : $this->poNumber;
            $this->budgetAmount = array_key_exists('budgetAmount', $data) ? $data['budgetAmount'] : $this->budgetAmount;
            $this->billingContactFirstname = array_key_exists('billingContactFirstname', $data) ? $data['billingContactFirstname'] : $this->billingContactFirstname;
            $this->billingContactLastname = array_key_exists('billingContactLastname', $data) ? $data['billingContactLastname'] : $this->billingContactLastname;
            $this->billingContactEmail = array_key_exists('billingContactEmail', $data) ? $data['billingContactEmail'] : $this->billingContactEmail;
            $this->mediaContactFirstname = array_key_exists('mediaContactFirstname', $data) ? $data['mediaContactFirstname'] : $this->mediaContactFirstname;
            $this->mediaContactLastname = array_key_exists('mediaContactLastname', $data) ? $data['mediaContactLastname'] : $this->mediaContactLastname;
            $this->mediaContactEmail = array_key_exists('mediaContactEmail', $data) ? $data['mediaContactEmail'] : $this->mediaContactEmail;
            $this->agencyLink = array_key_exists('agencyLink', $data) ? $data['agencyLink'] : $this->agencyLink;
            $this->userEmail = array_key_exists('userEmail', $data) ? $data['userEmail'] : $this->userEmail;
        }
    }

    /**
     * Gets startDate.
     *
     * @return string|null
     */
    public function getStartDate(): ?string
    {
        return $this->startDate;
    }



    /**
     * Sets startDate.
     *
     * @param string|null $startDate  Starting date of time period. Format: YYYY-MM-DD
     *
     * @return $this
     */
    public function setStartDate(?string $startDate = null): self
    {
        $this->startDate = $startDate;

        return $this;
    }

    /**
     * Gets endDate.
     *
     * @return string|null
     */
    public function getEndDate(): ?string
    {
        return $this->endDate;
    }



    /**
     * Sets endDate.
     *
     * @param string|null $endDate  End date of time period. Format: YYYY-MM-DD
     *
     * @return $this
     */
    public function setEndDate(?string $endDate = null): self
    {
        $this->endDate = $endDate;

        return $this;
    }

    /**
     * Gets poNumber.
     *
     * @return string|null
     */
    public function getPoNumber(): ?string
    {
        return $this->poNumber;
    }



    /**
     * Sets poNumber.
     *
     * @param string|null $poNumber  The po number
     *
     * @return $this
     */
    public function setPoNumber(?string $poNumber = null): self
    {
        $this->poNumber = $poNumber;

        return $this;
    }

    /**
     * Gets budgetAmount.
     *
     * @return float|null
     */
    public function getBudgetAmount(): ?float
    {
        return $this->budgetAmount;
    }



    /**
     * Sets budgetAmount.
     *
     * @param float|null $budgetAmount  If Budget order line, the budget amount.
     *
     * @return $this
     */
    public function setBudgetAmount(?float $budgetAmount = null): self
    {
        $this->budgetAmount = $budgetAmount;

        return $this;
    }

    /**
     * Gets billingContactFirstname.
     *
     * @return string|null
     */
    public function getBillingContactFirstname(): ?string
    {
        return $this->billingContactFirstname;
    }



    /**
     * Sets billingContactFirstname.
     *
     * @param string|null $billingContactFirstname  The billing contact first name
     *
     * @return $this
     */
    public function setBillingContactFirstname(?string $billingContactFirstname = null): self
    {
        $this->billingContactFirstname = $billingContactFirstname;

        return $this;
    }

    /**
     * Gets billingContactLastname.
     *
     * @return string|null
     */
    public function getBillingContactLastname(): ?string
    {
        return $this->billingContactLastname;
    }



    /**
     * Sets billingContactLastname.
     *
     * @param string|null $billingContactLastname  The billing contact last name
     *
     * @return $this
     */
    public function setBillingContactLastname(?string $billingContactLastname = null): self
    {
        $this->billingContactLastname = $billingContactLastname;

        return $this;
    }

    /**
     * Gets billingContactEmail.
     *
     * @return string|null
     */
    public function getBillingContactEmail(): ?string
    {
        return $this->billingContactEmail;
    }



    /**
     * Sets billingContactEmail.
     *
     * @param string|null $billingContactEmail  The billing contact email
     *
     * @return $this
     */
    public function setBillingContactEmail(?string $billingContactEmail = null): self
    {
        $this->billingContactEmail = $billingContactEmail;

        return $this;
    }

    /**
     * Gets mediaContactFirstname.
     *
     * @return string|null
     */
    public function getMediaContactFirstname(): ?string
    {
        return $this->mediaContactFirstname;
    }



    /**
     * Sets mediaContactFirstname.
     *
     * @param string|null $mediaContactFirstname  The media contact first name
     *
     * @return $this
     */
    public function setMediaContactFirstname(?string $mediaContactFirstname = null): self
    {
        $this->mediaContactFirstname = $mediaContactFirstname;

        return $this;
    }

    /**
     * Gets mediaContactLastname.
     *
     * @return string|null
     */
    public function getMediaContactLastname(): ?string
    {
        return $this->mediaContactLastname;
    }



    /**
     * Sets mediaContactLastname.
     *
     * @param string|null $mediaContactLastname  The media contact last name
     *
     * @return $this
     */
    public function setMediaContactLastname(?string $mediaContactLastname = null): self
    {
        $this->mediaContactLastname = $mediaContactLastname;

        return $this;
    }

    /**
     * Gets mediaContactEmail.
     *
     * @return string|null
     */
    public function getMediaContactEmail(): ?string
    {
        return $this->mediaContactEmail;
    }



    /**
     * Sets mediaContactEmail.
     *
     * @param string|null $mediaContactEmail  The media contact email
     *
     * @return $this
     */
    public function setMediaContactEmail(?string $mediaContactEmail = null): self
    {
        $this->mediaContactEmail = $mediaContactEmail;

        return $this;
    }

    /**
     * Gets agencyLink.
     *
     * @return string|null
     */
    public function getAgencyLink(): ?string
    {
        return $this->agencyLink;
    }



    /**
     * Sets agencyLink.
     *
     * @param string|null $agencyLink  URL link for agency
     *
     * @return $this
     */
    public function setAgencyLink(?string $agencyLink = null): self
    {
        $this->agencyLink = $agencyLink;

        return $this;
    }

    /**
     * Gets userEmail.
     *
     * @return string|null
     */
    public function getUserEmail(): ?string
    {
        return $this->userEmail;
    }



    /**
     * Sets userEmail.
     *
     * @param string|null $userEmail  The email of user submitting the insertion order
     *
     * @return $this
     */
    public function setUserEmail(?string $userEmail = null): self
    {
        $this->userEmail = $userEmail;

        return $this;
    }
}


