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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x746a2875, "v4l2_ctrl_log_status" },
	{ 0xad4121a3, "vb2_ioctl_streamoff" },
	{ 0xabfa79a3, "vb2_ioctl_streamon" },
	{ 0xc1426e05, "vb2_ioctl_prepare_buf" },
	{ 0x38ac6638, "vb2_ioctl_create_bufs" },
	{ 0xcc5164c6, "vb2_ioctl_dqbuf" },
	{ 0x90b86462, "vb2_ioctl_qbuf" },
	{ 0xa8d83a3a, "vb2_ioctl_querybuf" },
	{ 0xb37740c, "vb2_ioctl_reqbufs" },
	{ 0x31f40b3b, "vb2_fop_release" },
	{ 0x5f9af18a, "v4l2_fh_open" },
	{ 0x3627532, "vb2_fop_mmap" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0x7ad2821, "vb2_fop_poll" },
	{ 0x8cfaf8e7, "vb2_fop_read" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x10453a23, "v4l2_ctrl_add_handler" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0xe254994, "v4l2_ctrl_auto_cluster" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x91369769, "vb2_queue_init" },
	{ 0x7fb230bb, "vb2_vmalloc_memops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0xda71068d, "v4l2_ctrl_g_ctrl" },
	{ 0xb0e308ca, "v4l2_ctrl_find" },
	{ 0xc570ea5f, "_dev_notice" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0xff75c005, "v4l2_subdev_call_wrappers" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x6587c97e, "module_put" },
	{ 0x6520ebc8, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0x19f2eeb0, "v4l2_device_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "videodev,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "B7940FFE9901A67659AD89F");
