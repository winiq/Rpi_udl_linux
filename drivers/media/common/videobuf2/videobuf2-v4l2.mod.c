#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xc66aa469, "vb2_core_streamoff" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xd4a70f75, "vb2_core_dqbuf" },
	{ 0x2c0fac78, "vb2_mmap" },
	{ 0xf71ccc9, "vb2_core_qbuf" },
	{ 0x1e8abc61, "vb2_core_querybuf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x451d157c, "vb2_core_streamon" },
	{ 0x40b0b194, "vb2_core_poll" },
	{ 0xc730cebf, "vb2_read" },
	{ 0xe28ff29a, "vb2_core_prepare_buf" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0x5f138b40, "v4l2_event_pending" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa8bc73b8, "v4l2_fh_release" },
	{ 0xa278349c, "media_request_put" },
	{ 0xd24ae152, "vb2_core_queue_release" },
	{ 0xd7484103, "vb2_request_buffer_cnt" },
	{ 0xf8f418c0, "vb2_write" },
	{ 0x27ebbd92, "media_request_get_by_fd" },
	{ 0x81822a88, "put_device" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xadc9aed4, "get_device" },
	{ 0xb572704, "vb2_core_create_bufs" },
	{ 0x7aa6ff5a, "vb2_core_expbuf" },
	{ 0xd18db692, "vb2_core_reqbufs" },
	{ 0x49043e5c, "vb2_verify_memory_type" },
	{ 0x250a2598, "vb2_core_queue_init" },
	{ 0x57d0b4ae, "vb2_buffer_in_use" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "36F2F6FB7983EAF01BB4117");
