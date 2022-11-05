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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0x2c0fac78, "vb2_mmap" },
	{ 0x210ec49c, "media_devnode_create" },
	{ 0xaa4884f6, "vb2_create_bufs" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xed7d2c22, "vb2_request_object_is_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7833880e, "media_remove_intf_links" },
	{ 0x3c7a81f8, "vb2_prepare_buf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x5f138b40, "v4l2_event_pending" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x657212b4, "vb2_qbuf" },
	{ 0x10e45fee, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0xd06f27a9, "vb2_streamon" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xceeb4ac8, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0x1e53ba11, "vb2_reqbufs" },
	{ 0xb1d1f5d5, "media_entity_remove_links" },
	{ 0x6938be15, "media_create_intf_link" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x21e31665, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73477a6e, "vb2_queue_release" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x65c3cc5f, "vb2_streamoff" },
	{ 0xbe0e15a5, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,videobuf2-common,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "CC07879706AC4D264474521");
