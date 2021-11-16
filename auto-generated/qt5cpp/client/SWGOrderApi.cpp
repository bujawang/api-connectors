/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "SWGOrderApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"
#include "SWGQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGOrderApi::SWGOrderApi() {}

SWGOrderApi::~SWGOrderApi() {}

SWGOrderApi::SWGOrderApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOrderApi::order_amend(QString* order_id, QString* orig_cl_ord_id, QString* cl_ord_id, double simple_order_qty, SWGNumber* order_qty, double simple_leaves_qty, SWGNumber* leaves_qty, double price, double stop_px, double peg_offset_value, QString* text) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "PUT");

    if (order_id != nullptr) {
        input.add_var("orderID", *order_id);
    }
    if (orig_cl_ord_id != nullptr) {
        input.add_var("origClOrdID", *orig_cl_ord_id);
    }
    if (cl_ord_id != nullptr) {
        input.add_var("clOrdID", *cl_ord_id);
    }
    if (simple_order_qty != nullptr) {
        input.add_var("simpleOrderQty", *simple_order_qty);
    }
    if (order_qty != nullptr) {
        input.add_var("orderQty", *order_qty);
    }
    if (simple_leaves_qty != nullptr) {
        input.add_var("simpleLeavesQty", *simple_leaves_qty);
    }
    if (leaves_qty != nullptr) {
        input.add_var("leavesQty", *leaves_qty);
    }
    if (price != nullptr) {
        input.add_var("price", *price);
    }
    if (stop_px != nullptr) {
        input.add_var("stopPx", *stop_px);
    }
    if (peg_offset_value != nullptr) {
        input.add_var("pegOffsetValue", *peg_offset_value);
    }
    if (text != nullptr) {
        input.add_var("text", *text);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_amendCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_amendCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_amendSignal(output);
    } else {
        emit order_amendSignalE(output, error_type, error_str);
        emit order_amendSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_cancel(QString* order_id, QString* cl_ord_id, QString* text) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "DELETE");

    if (order_id != nullptr) {
        input.add_var("orderID", *order_id);
    }
    if (cl_ord_id != nullptr) {
        input.add_var("clOrdID", *cl_ord_id);
    }
    if (text != nullptr) {
        input.add_var("text", *text);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_cancelCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_cancelCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<SWGOrder*>* output = new QList<SWGOrder*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new SWGQObjectWrapper<QList<SWGOrder*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        SWGOrder* o = new SWGOrder();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new SWGQObjectWrapper<SWGOrder*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_cancelSignal(output);
    } else {
        emit order_cancelSignalE(output, error_type, error_str);
        emit order_cancelSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_cancelAll(QString* symbol, QString* filter, QString* text) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order/all");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "DELETE");

    if (symbol != nullptr) {
        input.add_var("symbol", *symbol);
    }
    if (filter != nullptr) {
        input.add_var("filter", *filter);
    }
    if (text != nullptr) {
        input.add_var("text", *text);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_cancelAllCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_cancelAllCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<SWGOrder*>* output = new QList<SWGOrder*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new SWGQObjectWrapper<QList<SWGOrder*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        SWGOrder* o = new SWGOrder();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new SWGQObjectWrapper<SWGOrder*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_cancelAllSignal(output);
    } else {
        emit order_cancelAllSignalE(output, error_type, error_str);
        emit order_cancelAllSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_cancelAllAfter(double timeout) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order/cancelAllAfter");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");

    if (timeout != nullptr) {
        input.add_var("timeout", *timeout);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_cancelAllAfterCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_cancelAllAfterCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGObject* output = static_cast<SWGObject*>(create(json, QString("SWGObject")));
    auto wrapper = new SWGQObjectWrapper<SWGObject*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_cancelAllAfterSignal(output);
    } else {
        emit order_cancelAllAfterSignalE(output, error_type, error_str);
        emit order_cancelAllAfterSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_closePosition(QString* symbol, double price) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order/closePosition");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");

    if (symbol != nullptr) {
        input.add_var("symbol", *symbol);
    }
    if (price != nullptr) {
        input.add_var("price", *price);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_closePositionCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_closePositionCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_closePositionSignal(output);
    } else {
        emit order_closePositionSignalE(output, error_type, error_str);
        emit order_closePositionSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_getOrders(QString* symbol, QString* filter, QString* columns, SWGNumber* count, SWGNumber* start, bool reverse, QDateTime* start_time, QDateTime* end_time) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("symbol"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(symbol)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("columns"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(columns)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("count"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(count)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("start"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(start)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("reverse"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(reverse)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("startTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(start_time)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("endTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(end_time)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_getOrdersCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_getOrdersCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<SWGOrder*>* output = new QList<SWGOrder*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new SWGQObjectWrapper<QList<SWGOrder*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        SWGOrder* o = new SWGOrder();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new SWGQObjectWrapper<SWGOrder*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_getOrdersSignal(output);
    } else {
        emit order_getOrdersSignalE(output, error_type, error_str);
        emit order_getOrdersSignalEFull(worker, error_type, error_str);
    }
}

void
SWGOrderApi::order_new(QString* symbol, QString* side, double simple_order_qty, SWGNumber* order_qty, double price, SWGNumber* display_qty, double stop_px, QString* cl_ord_id, QString* cl_ord_link_id, double peg_offset_value, QString* peg_price_type, QString* ord_type, QString* time_in_force, QString* exec_inst, QString* contingency_type, QString* text) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/order");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");

    if (symbol != nullptr) {
        input.add_var("symbol", *symbol);
    }
    if (side != nullptr) {
        input.add_var("side", *side);
    }
    if (simple_order_qty != nullptr) {
        input.add_var("simpleOrderQty", *simple_order_qty);
    }
    if (order_qty != nullptr) {
        input.add_var("orderQty", *order_qty);
    }
    if (price != nullptr) {
        input.add_var("price", *price);
    }
    if (display_qty != nullptr) {
        input.add_var("displayQty", *display_qty);
    }
    if (stop_px != nullptr) {
        input.add_var("stopPx", *stop_px);
    }
    if (cl_ord_id != nullptr) {
        input.add_var("clOrdID", *cl_ord_id);
    }
    if (cl_ord_link_id != nullptr) {
        input.add_var("clOrdLinkID", *cl_ord_link_id);
    }
    if (peg_offset_value != nullptr) {
        input.add_var("pegOffsetValue", *peg_offset_value);
    }
    if (peg_price_type != nullptr) {
        input.add_var("pegPriceType", *peg_price_type);
    }
    if (ord_type != nullptr) {
        input.add_var("ordType", *ord_type);
    }
    if (time_in_force != nullptr) {
        input.add_var("timeInForce", *time_in_force);
    }
    if (exec_inst != nullptr) {
        input.add_var("execInst", *exec_inst);
    }
    if (contingency_type != nullptr) {
        input.add_var("contingencyType", *contingency_type);
    }
    if (text != nullptr) {
        input.add_var("text", *text);
    }




    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGOrderApi::order_newCallback);

    worker->execute(&input);
}

void
SWGOrderApi::order_newCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit order_newSignal(output);
    } else {
        emit order_newSignalE(output, error_type, error_str);
        emit order_newSignalEFull(worker, error_type, error_str);
    }
}


}
