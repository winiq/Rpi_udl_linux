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
	{ 0x826655e4, "param_ops_int" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xce93cf08, "tty_driver_kref_put" },
	{ 0xb47bd909, "tty_unregister_driver" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x84f0547, "tty_register_driver" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x9b4ba46c, "__tty_alloc_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3bddda29, "tty_port_register_device_attr" },
	{ 0x19421b50, "tty_port_init" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1a7f2bb0, "tty_port_tty_hangup" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0xa669811f, "tty_buffer_request_room" },
	{ 0x3bc51a5a, "tty_port_tty_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x69f849ce, "tty_encode_baud_rate" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xca133eb5, "rfkill_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x63fab78d, "tty_port_tty_wakeup" },
	{ 0xdcb764ad, "memset" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x76cced1a, "tty_port_tty_set" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xc1c1a42a, "tty_unregister_device" },
	{ 0x9628d045, "tty_port_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1fc1b597, "usb_queue_reset_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "rfkill");

MODULE_ALIAS("usb:v0AF0p6711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6771d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6911d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF89AB8A9F337AFE9913F73");
