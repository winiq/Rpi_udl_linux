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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x4cf1681, "usb_function_deactivate" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x3e07113c, "usb_ep_autoconfig_ss" },
	{ 0x35c8f250, "usb_gstrings_attach" },
	{ 0xd6099f7a, "usb_free_all_descriptors" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xfcee867e, "v4l2_event_queue" },
	{ 0x2c0fac78, "vb2_mmap" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbf3a8ac9, "config_item_put" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0x9c2fc960, "config_item_init_type_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x645a5813, "usb_function_activate" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7fb230bb, "vb2_vmalloc_memops" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x33700033, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0x595393f8, "v4l2_fh_init" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x657212b4, "vb2_qbuf" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0xb7c0f443, "sort" },
	{ 0x10e45fee, "vb2_querybuf" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0x44ecb72a, "usb_composite_setup_continue" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x604cc700, "vb2_plane_cookie" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd06f27a9, "vb2_streamon" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x1e53ba11, "vb2_reqbufs" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x21e31665, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x84ea0f4d, "v4l2_fh_add" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0x59e6a6c3, "v4l2_fh_del" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcf2cbaec, "vb2_poll" },
	{ 0x73477a6e, "vb2_queue_release" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xc5958ec7, "config_group_find_item" },
	{ 0x65c3cc5f, "vb2_streamoff" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0xd9ff9945, "vb2_dma_sg_memops" },
	{ 0xd4fc93fc, "v4l2_fh_exit" },
	{ 0x91369769, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-dma-sg");


MODULE_INFO(srcversion, "000E9148EA7CE3D6388A042");
