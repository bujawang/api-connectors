# coding: utf-8

"""
    BitMEX API

    ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.   # noqa: E501

    OpenAPI spec version: 1.2.0
    Contact: support@bitmex.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from swagger_client.configuration import Configuration


class Address(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'id': 'float',
        'currency': 'str',
        'created': 'datetime',
        'user_id': 'float',
        'address': 'str',
        'name': 'str',
        'note': 'str',
        'skip_confirm': 'bool',
        'skip_confirm_verified': 'bool',
        'skip2_fa': 'bool',
        'skip2_fa_verified': 'bool',
        'network': 'str',
        'memo': 'str'
    }

    attribute_map = {
        'id': 'id',
        'currency': 'currency',
        'created': 'created',
        'user_id': 'userId',
        'address': 'address',
        'name': 'name',
        'note': 'note',
        'skip_confirm': 'skipConfirm',
        'skip_confirm_verified': 'skipConfirmVerified',
        'skip2_fa': 'skip2FA',
        'skip2_fa_verified': 'skip2FAVerified',
        'network': 'network',
        'memo': 'memo'
    }

    def __init__(self, id=None, currency=None, created=None, user_id=None, address=None, name=None, note=None, skip_confirm=None, skip_confirm_verified=None, skip2_fa=None, skip2_fa_verified=None, network=None, memo=None, _configuration=None):  # noqa: E501
        """Address - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._id = None
        self._currency = None
        self._created = None
        self._user_id = None
        self._address = None
        self._name = None
        self._note = None
        self._skip_confirm = None
        self._skip_confirm_verified = None
        self._skip2_fa = None
        self._skip2_fa_verified = None
        self._network = None
        self._memo = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if currency is not None:
            self.currency = currency
        if created is not None:
            self.created = created
        if user_id is not None:
            self.user_id = user_id
        self.address = address
        self.name = name
        if note is not None:
            self.note = note
        if skip_confirm is not None:
            self.skip_confirm = skip_confirm
        if skip_confirm_verified is not None:
            self.skip_confirm_verified = skip_confirm_verified
        if skip2_fa is not None:
            self.skip2_fa = skip2_fa
        if skip2_fa_verified is not None:
            self.skip2_fa_verified = skip2_fa_verified
        self.network = network
        if memo is not None:
            self.memo = memo

    @property
    def id(self):
        """Gets the id of this Address.  # noqa: E501


        :return: The id of this Address.  # noqa: E501
        :rtype: float
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Address.


        :param id: The id of this Address.  # noqa: E501
        :type: float
        """

        self._id = id

    @property
    def currency(self):
        """Gets the currency of this Address.  # noqa: E501


        :return: The currency of this Address.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this Address.


        :param currency: The currency of this Address.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def created(self):
        """Gets the created of this Address.  # noqa: E501


        :return: The created of this Address.  # noqa: E501
        :rtype: datetime
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this Address.


        :param created: The created of this Address.  # noqa: E501
        :type: datetime
        """

        self._created = created

    @property
    def user_id(self):
        """Gets the user_id of this Address.  # noqa: E501


        :return: The user_id of this Address.  # noqa: E501
        :rtype: float
        """
        return self._user_id

    @user_id.setter
    def user_id(self, user_id):
        """Sets the user_id of this Address.


        :param user_id: The user_id of this Address.  # noqa: E501
        :type: float
        """

        self._user_id = user_id

    @property
    def address(self):
        """Gets the address of this Address.  # noqa: E501


        :return: The address of this Address.  # noqa: E501
        :rtype: str
        """
        return self._address

    @address.setter
    def address(self, address):
        """Sets the address of this Address.


        :param address: The address of this Address.  # noqa: E501
        :type: str
        """
        if self._configuration.client_side_validation and address is None:
            raise ValueError("Invalid value for `address`, must not be `None`")  # noqa: E501

        self._address = address

    @property
    def name(self):
        """Gets the name of this Address.  # noqa: E501


        :return: The name of this Address.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this Address.


        :param name: The name of this Address.  # noqa: E501
        :type: str
        """
        if self._configuration.client_side_validation and name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def note(self):
        """Gets the note of this Address.  # noqa: E501


        :return: The note of this Address.  # noqa: E501
        :rtype: str
        """
        return self._note

    @note.setter
    def note(self, note):
        """Sets the note of this Address.


        :param note: The note of this Address.  # noqa: E501
        :type: str
        """

        self._note = note

    @property
    def skip_confirm(self):
        """Gets the skip_confirm of this Address.  # noqa: E501


        :return: The skip_confirm of this Address.  # noqa: E501
        :rtype: bool
        """
        return self._skip_confirm

    @skip_confirm.setter
    def skip_confirm(self, skip_confirm):
        """Sets the skip_confirm of this Address.


        :param skip_confirm: The skip_confirm of this Address.  # noqa: E501
        :type: bool
        """

        self._skip_confirm = skip_confirm

    @property
    def skip_confirm_verified(self):
        """Gets the skip_confirm_verified of this Address.  # noqa: E501


        :return: The skip_confirm_verified of this Address.  # noqa: E501
        :rtype: bool
        """
        return self._skip_confirm_verified

    @skip_confirm_verified.setter
    def skip_confirm_verified(self, skip_confirm_verified):
        """Sets the skip_confirm_verified of this Address.


        :param skip_confirm_verified: The skip_confirm_verified of this Address.  # noqa: E501
        :type: bool
        """

        self._skip_confirm_verified = skip_confirm_verified

    @property
    def skip2_fa(self):
        """Gets the skip2_fa of this Address.  # noqa: E501


        :return: The skip2_fa of this Address.  # noqa: E501
        :rtype: bool
        """
        return self._skip2_fa

    @skip2_fa.setter
    def skip2_fa(self, skip2_fa):
        """Sets the skip2_fa of this Address.


        :param skip2_fa: The skip2_fa of this Address.  # noqa: E501
        :type: bool
        """

        self._skip2_fa = skip2_fa

    @property
    def skip2_fa_verified(self):
        """Gets the skip2_fa_verified of this Address.  # noqa: E501


        :return: The skip2_fa_verified of this Address.  # noqa: E501
        :rtype: bool
        """
        return self._skip2_fa_verified

    @skip2_fa_verified.setter
    def skip2_fa_verified(self, skip2_fa_verified):
        """Sets the skip2_fa_verified of this Address.


        :param skip2_fa_verified: The skip2_fa_verified of this Address.  # noqa: E501
        :type: bool
        """

        self._skip2_fa_verified = skip2_fa_verified

    @property
    def network(self):
        """Gets the network of this Address.  # noqa: E501


        :return: The network of this Address.  # noqa: E501
        :rtype: str
        """
        return self._network

    @network.setter
    def network(self, network):
        """Sets the network of this Address.


        :param network: The network of this Address.  # noqa: E501
        :type: str
        """
        if self._configuration.client_side_validation and network is None:
            raise ValueError("Invalid value for `network`, must not be `None`")  # noqa: E501

        self._network = network

    @property
    def memo(self):
        """Gets the memo of this Address.  # noqa: E501


        :return: The memo of this Address.  # noqa: E501
        :rtype: str
        """
        return self._memo

    @memo.setter
    def memo(self, memo):
        """Sets the memo of this Address.


        :param memo: The memo of this Address.  # noqa: E501
        :type: str
        """

        self._memo = memo

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(Address, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Address):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Address):
            return True

        return self.to_dict() != other.to_dict()
