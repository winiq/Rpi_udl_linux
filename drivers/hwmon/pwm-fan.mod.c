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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xbdf1d0d2, "devm_thermal_of_cooling_device_register" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x55e84b01, "of_property_count_elems_of_size" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x4c361bcb, "devm_hwmon_device_register_with_info" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x3f7a21f0, "of_property_read_u32_index" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xd316c8aa, "platform_irq_count" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0xa453df7a, "devm_of_pwm_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8672b7c8, "pwm_apply_state" },
	{ 0x3967f406, "regulator_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-fan");
MODULE_ALIAS("of:N*T*Cpwm-fanC*");

MODULE_INFO(srcversion, "575E80288A57B35AB5F04D3");
