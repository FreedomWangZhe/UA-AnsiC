/* ========================================================================
 * Copyright (c) 2005-2018 The OPC Foundation, Inc. All rights reserved.
 *
 * OPC Foundation MIT License 1.00
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * The complete license agreement can be found here:
 * http://opcfoundation.org/License/MIT/1.00/
 * ======================================================================*/

/******************************************************************************************************/
/** @file Internally used definitions and types for the platform layer network implementation         */
/******************************************************************************************************/
#ifndef _OpcUa_Socket_Ssl_H_
#define _OpcUa_Socket_Ssl_H_ 1

OPCUA_BEGIN_EXTERN_C

#if OPCUA_P_SOCKETMANAGER_SUPPORT_SSL

/*============================================================================
 * Create a SSL server socket
 *===========================================================================*/
OpcUa_StatusCode OPCUA_DLLCALL OpcUa_P_SocketManager_CreateSslServer(  OpcUa_SocketManager              pSocketManager,
                                                                       OpcUa_StringA                    sAddress,
                                                                       OpcUa_Boolean                    bListenOnAllInterfaces,
                                                                       OpcUa_ByteString*                pServerCertificate,
                                                                       OpcUa_Key*                       pServerPrivateKey,
                                                                       OpcUa_Void*                      pPKIConfig,
                                                                       OpcUa_Socket_EventCallback       pfnSocketCallBack,
                                                                       OpcUa_Socket_CertificateCallback pfnCertificateCallBack,
                                                                       OpcUa_Void*                      pCallbackData,
                                                                       OpcUa_Socket*                    pSocket);

/*============================================================================
 * Create a SSL client socket
 *===========================================================================*/
OpcUa_StatusCode OPCUA_DLLCALL OpcUa_P_SocketManager_CreateSslClient(  OpcUa_SocketManager              pSocketManager,
                                                                       OpcUa_StringA                    sRemoteAddress,
                                                                       OpcUa_UInt16                     uLocalPort,
                                                                       OpcUa_ByteString*                pClientCertificate,
                                                                       OpcUa_Key*                       pClientPrivateKey,
                                                                       OpcUa_Void*                      pPKIConfig,
                                                                       OpcUa_Socket_EventCallback       pfnSocketCallBack,
                                                                       OpcUa_Socket_CertificateCallback pfnCertificateCallBack,
                                                                       OpcUa_Void*                      pCallbackData,
                                                                       OpcUa_Socket*                    pSocket);

#endif /* OPCUA_P_SOCKETMANAGER_SUPPORT_SSL */

OPCUA_END_EXTERN_C

#endif /* _OpcUa_Socket_Ssl_H_ */
