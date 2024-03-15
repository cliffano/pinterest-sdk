<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
 */
class ConversionEventsUserData
{
    /**
     * Sha256 hashes of user&#39;s phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
     * @DTA\Data(field="ph", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection98::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection98::class})
     * @var \App\DTO\Collection98|null
     */
    public $ph;

    /**
     * Sha256 hashes of user&#39;s gender, in lowercase. Either \&quot;f\&quot; or \&quot;m\&quot; or \&quot;n\&quot; for non-binary gender.
     * @DTA\Data(field="ge", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection99::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection99::class})
     * @var \App\DTO\Collection99|null
     */
    public $ge;

    /**
     * Sha256 hashes of user&#39;s date of birthday, given as year, month, and day.
     * @DTA\Data(field="db", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection100::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection100::class})
     * @var \App\DTO\Collection100|null
     */
    public $db;

    /**
     * Sha256 hashes of user&#39;s last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
     * @DTA\Data(field="ln", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection101::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection101::class})
     * @var \App\DTO\Collection101|null
     */
    public $ln;

    /**
     * Sha256 hashes of user&#39;s first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
     * @DTA\Data(field="fn", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection102::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection102::class})
     * @var \App\DTO\Collection102|null
     */
    public $fn;

    /**
     * Sha256 hashes of user&#39;s city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).
     * @DTA\Data(field="ct", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection103::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection103::class})
     * @var \App\DTO\Collection103|null
     */
    public $ct;

    /**
     * Sha256 hashes of user&#39;s state, given as a two-letter code in lowercase. User residency state (mostly billing).
     * @DTA\Data(field="st", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection104::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection104::class})
     * @var \App\DTO\Collection104|null
     */
    public $st;

    /**
     * Sha256 hashes of user&#39;s zipcode, only digits. User residency zipcode (mostly billing).
     * @DTA\Data(field="zp", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection105::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection105::class})
     * @var \App\DTO\Collection105|null
     */
    public $zp;

    /**
     * Sha256 hashes of two-character ISO-3166 country code indicating the user&#39;s country, in lowercase.
     * @DTA\Data(field="country", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection106::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection106::class})
     * @var \App\DTO\Collection106|null
     */
    public $country;

    /**
     * Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.
     * @DTA\Data(field="external_id", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection107::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection107::class})
     * @var \App\DTO\Collection107|null
     */
    public $external_id;

    /**
     * The unique identifier stored in _epik cookie on your domain or &amp;epik&#x3D; query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
     * @DTA\Data(field="click_id", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     * @var string|null
     */
    public $click_id;

    /**
     * A unique identifier of visitors&#39; information defined by third party partners. e.g RampID
     * @DTA\Data(field="partner_id", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     * @var string|null
     */
    public $partner_id;

}
