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
	{ 0x826655e4, "param_ops_int" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x533ca3f8, "usb_find_interface" },
	{ 0xc5933243, "input_free_device" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0x45135ce2, "rc_keyup" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8c1a45ac, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xfce6b7f2, "usb_submit_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2636F5A567F6393D3D0572F");
