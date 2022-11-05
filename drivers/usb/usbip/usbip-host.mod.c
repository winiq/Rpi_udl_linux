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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe331f640, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34a0d73f, "usb_set_configuration" },
	{ 0xb6037b56, "usbip_alloc_iso_desc_pdu" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2066d582, "usb_hub_claim_port" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb13f77a6, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5a0c68c, "usbip_in_eh" },
	{ 0x3416c0e5, "usb_lock_device_for_reset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd832bd71, "usb_register_device_driver" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0xe1ecb773, "device_attach" },
	{ 0xc5851382, "usbip_stop_eh" },
	{ 0x7768d568, "dev_attr_usbip_debug" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xa5c5220d, "fput" },
	{ 0x4ae970af, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xe78c5e3a, "usbip_dump_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x281ccea1, "driver_create_file" },
	{ 0x151cc53b, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe4d465a1, "usb_deregister_device_driver" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xddac68b9, "usbip_recv_xbuff" },
	{ 0x7b32abfb, "usb_hub_release_port" },
	{ 0x779fe99f, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa175ac07, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d625398, "usbip_start_eh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xa69221f8, "usbip_pack_pdu" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "464C1F14F48EF5D5EE0D980");
