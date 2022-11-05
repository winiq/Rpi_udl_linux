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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe331f640, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf5d86af0, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6e7d034, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x21d6af9f, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x27a1fcd8, "usb_create_hcd" },
	{ 0x3290afbb, "usb_hcd_poll_rh_status" },
	{ 0xb6037b56, "usbip_alloc_iso_desc_pdu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf37c36ad, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c5b3a68, "usb_put_hcd" },
	{ 0xb13f77a6, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdfa2427c, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xdcb764ad, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x6a23f917, "usb_hcd_link_urb_to_ep" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x8133a2c6, "platform_device_del" },
	{ 0xb46411ce, "platform_device_alloc" },
	{ 0xcb809a58, "platform_device_add" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xc5851382, "usbip_stop_eh" },
	{ 0x7768d568, "dev_attr_usbip_debug" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xa5c5220d, "fput" },
	{ 0x4ae970af, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe5bf95dc, "usbip_pad_iso" },
	{ 0x6567c77b, "usb_hcd_check_unlink_urb" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xe78c5e3a, "usbip_dump_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x151cc53b, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xb162d991, "platform_bus" },
	{ 0x1f4e933b, "platform_device_add_data" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xddac68b9, "usbip_recv_xbuff" },
	{ 0x779fe99f, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x13b13d71, "usb_hcd_unlink_urb_from_ep" },
	{ 0xa018136a, "usb_hcd_resume_root_hub" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9d625398, "usbip_start_eh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa69221f8, "usbip_pack_pdu" },
	{ 0xe61ce347, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "8D5569137A4FED6EC22B5AD");
