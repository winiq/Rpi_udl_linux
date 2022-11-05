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
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb6037b56, "usbip_alloc_iso_desc_pdu" },
	{ 0x13fc30dd, "usb_del_gadget_udc" },
	{ 0x7be89624, "usb_gadget_giveback_request" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb13f77a6, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41f0c11e, "usb_gadget_udc_reset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x8133a2c6, "platform_device_del" },
	{ 0xb46411ce, "platform_device_alloc" },
	{ 0xcb809a58, "platform_device_add" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xc5851382, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xa5c5220d, "fput" },
	{ 0x4ae970af, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x151cc53b, "usbip_recv" },
	{ 0xeb9424a5, "usb_add_gadget_udc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7a41b9f2, "usb_ep_set_maxpacket_limit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xddac68b9, "usbip_recv_xbuff" },
	{ 0x779fe99f, "__put_task_struct" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9d625398, "usbip_start_eh" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xa69221f8, "usbip_pack_pdu" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe61ce347, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "30167DC5CF1B97A6AD265D5");
